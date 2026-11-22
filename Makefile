TARGET = lab3

.PHONY: all clean install uninstall

all: $(TARGET)

main.o: main.c
	clang -c -o main.o main.c

$(TARGET): main.o
	clang -o $(TARGET) main.o

clean:
	rm -rf ${TARGET} main.o