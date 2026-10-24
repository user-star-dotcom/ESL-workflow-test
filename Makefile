CC = gcc
CFLAGS = -Wall -Wextra -Wpedantic -std=c99
CPPFLAGS = -Isrc
TARGET = test_app

all: $(TARGET)

$(TARGET): main.o vector.o
	$(CC) $(CFLAGS) -o $(TARGET) main.o vector.o

main.o: src/main.c src/vector.h
	$(CC) $(CPPFLAGS) $(CFLAGS) -c src/main.c -o main.o

vector.o: src/vector.c src/vector.h
	$(CC) $(CPPFLAGS) $(CFLAGS) -c src/vector.c -o vector.o

test: $(TARGET)
	./$(TARGET)

clean:
	rm -f *.o $(TARGET)

.PHONY: all test clean
