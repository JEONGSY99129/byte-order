all: byte_order

byte_order : add-nbo.o byte_order.o
	g++ -o byte_order add-nbo.o byte_order.o

byte_order.o: sum.h byte_order.cpp
	g++ -c -o byte_order.o byte_order.cpp

add-nbo.o: add-nbo.cpp sum.h
	g++ -c -o add-nbo.o add-nbo.cpp

clean:
	rm -f byte_order *.o
