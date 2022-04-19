TDD Tests using acutest

Contents: main.c      - can be ignored for now
	      math_lib.h  - header file for the math library
	      math_lib.c  - the actual math functions (empty for now, just premade for the tests)
	      math_test.c - contains tests for the math library
	      Makefile    - I don't have to explain this one right?

How to use: make           - to compile the math library
            make math_test - to compile the tests
	        make clean     - to clean the folder of .o and compiled files
	        ./math_test    - run the tests
