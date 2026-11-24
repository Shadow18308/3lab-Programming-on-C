TARGET = lab3
FLAGS = -Wall -Wextra
.PHONY: all clean

all: $(TARGET)

main.o: main.c
	clang ${FLAGS} -c -o main.o main.c

queue.o: queue.c queue.h
	clang ${FLAGS} -c -o queue.o queue.c

$(TARGET): main.o queue.o
	clang ${FLAGS} -o $(TARGET) main.o queue.o

clean:
	cmd /C "del *.o lab3.exe 2>nul"