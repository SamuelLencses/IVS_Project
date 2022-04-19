Contents: main.c      - can be ignored for now
	  math_lib.h  - header file for the math library
	  math_lib.c  - the actual math functions (empty for now, just premade for the tests)
	  math_test.c - contains tests for the math library
	  profiling.c - profiling program
	  Makefile    - I don't have to explain this one right?

How to use: make           - to compile the math library
            make test      - to compile and run the tests
	    make profiling - to compile and run the profiling with the input from data_100.txt
		
	    make clean     - to clean the folder of .o and compiled files
	    ./math_test    - run the tests
	    ./profiling <data_10.txt - run the profiling with the input from file data_10.txt (there are also 100 and 1000 versions)
