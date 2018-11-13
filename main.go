package main

// #cgo LDFLAGS: ./libtest.a
// #include "test.h"
import "C"
import "unsafe"

import (
	"fmt"
)

type Test struct {
	test C.Test
}
func New(value C.int)(Test) {
	var ret Test
	ret.test = C.TestInit(value)
	return ret
}
func (p Test)Free() {
	C.TestFree((C.Test)(unsafe.Pointer(p.test)));
}
func (p Test)TestFunc(value C.int) {
	C.TestCall((C.Test)(unsafe.Pointer(p.test)), value)
}


func main() {
	fmt.Println("main")

	test := New(123)
	test.TestFunc(10)
	test.Free()
}