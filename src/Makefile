# Makefile
# 2nd IVS Project
# Author: Kryštof Paulík, xpauli08
# Date: 2022-03-30

CC = gcc
CFLAGS = -std=c99

all: main profile

main: main.o math_lib.o
	$(CC) $(CFLAGS) -o main main.o math_lib.o -lm

test: math_test.o math_lib.o
	$(CC) $(CFLAGS) -o math_test math_test.o math_lib.o -lm
	./math_test

math_lib.o: math_lib.h math_lib.c
	$(CC) $(CFLAGS) -c math_lib.c -lm

profile: profiling.o math_lib.o
	$(CC) $(CFLAGS) -o profiling profiling.o math_lib.o -lm

clean:
	rm -f core *.o main math_test profiling