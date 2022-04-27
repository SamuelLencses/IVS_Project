# Makefile
# 2nd IVS Project
# Author: Kryštof Paulík, xpauli08
# Date: 2022-03-30

CC = gcc
CFLAGS = -std=c99

.PHONY: all rn main test math_lib.o profile doc clean

# prelozi projekt vcetne programu pro profiling
all: main profile

# spusti projekt
run: main
	./main

# prelozi main
main: main.o math_lib.o
	$(CC) $(CFLAGS) -o main main.o math_lib.o -lm

# prelozi a spusti testy matematicke knihovny
test: math_test.o math_lib.o
	$(CC) $(CFLAGS) -o math_test math_test.o math_lib.o -lm
	./math_test

math_lib.o: math_lib.h math_lib.c
	$(CC) $(CFLAGS) -c math_lib.c -lm

# prelozi program pro profiing
profile: profiling.o math_lib.o
	$(CC) $(CFLAGS) -o profiling profiling.o math_lib.o -lm

doc: Doxyfile
	cd .. && rm -rf doc
	cd .. && mkdir doc && cd doc && doxygen ../src/$^

# smaze vsechny soubory, co nemaji byt odevzdany
clean:
	rm -f core *.o main math_test profiling && cd .. && rm -rf doc