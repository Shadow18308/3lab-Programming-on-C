TARGET = lab3

.PHONY: all clean install uninstall

all: $(TARGET)

main.o: main.c
	clang -c -o main.o main.c

queue.o: queue.c queue.h
	clang -c -o queue.o queue.c

$(TARGET): main.o queue.o
	clang -o $(TARGET) main.o queue.o

clean:
	rm -rf ${TARGET} main.o queue.o