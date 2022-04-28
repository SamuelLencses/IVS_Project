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

# vytvori dokumentaci
doc: Doxyfile
	cd .. && rm -rf doc
	cd .. && mkdir doc && cd doc && doxygen ../src/$^

# zabali projekt pro odevzdani
pack: doc makepack xlencs00_xnovel00_xhalad03_xpauli08.zip

xlencs00_xnovel00_xhalad03_xpauli08.zip:
	rm -rf ../../xlencs00_xnovel00_xhalad03_xpauli08/repo/install
	rm -rf ../../xlencs00_xnovel00_xhalad03_xpauli08/repo/doc
	cd ../.. && zip -r $@ xlencs00_xnovel00_xhalad03_xpauli08

makepack:
	mkdir -p ../../xlencs00_xnovel00_xhalad03_xpauli08/repo
	mkdir ../../xlencs00_xnovel00_xhalad03_xpauli08/install
	mkdir ../../xlencs00_xnovel00_xhalad03_xpauli08/doc
	cp -a ../../IVS_Project/. ../../xlencs00_xnovel00_xhalad03_xpauli08/repo
	cp -a ../doc/. ../../xlencs00_xnovel00_xhalad03_xpauli08/doc/
	cp -a ../install/. ../../xlencs00_xnovel00_xhalad03_xpauli08/install/

# smaze vsechny soubory, co nemaji byt odevzdany
clean:
	rm -f core *.o main math_test profiling
	rm -rf ../doc
	rm -rf ../../xlencs00_xnovel00_xhalad03_xpauli08
