.PHONY: clean

TARGET=dbg_test

$(TARGET): libtest.a
	go build .

libtest.a: test.o ctest.o
	ar r $@ $^

%.o: %.cpp
	g++ -O2 -o $@ -c $^

clean:
	rm *.o *.so *.a $(TARGET)