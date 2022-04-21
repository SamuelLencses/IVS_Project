CC = gcc
CFLAGS = -std=c99

main: main.o math_lib.o
	$(CC) $(CFLAGS) -o main main.o math_lib.o

test: math_test.o math_lib.o
	$(CC) $(CFLAGS) -o math_test math_test.o math_lib.o
	./math_test

math_lib.o: math_lib.h math_lib.c
	$(CC) $(CFLAGS) -c math_lib.c

profile: profiling.o math_lib.o
	$(CC) $(CFLAGS) -o profiling profiling.o math_lib.o -lm
	./profiling <data_100.txt

clean:
	rm -f core *.o main math_test profiling