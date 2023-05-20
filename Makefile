
# if GMP not in default location, find the gmp location via
# > locate "/gmp.h" 
# > locate libgmp.a
# and compilation flags changed to
# > gcc -o test -I <gmp.h directory> -L<libgmp.a directory> test.c -lgmp

all: 
	gcc -o test test.c -lgmp 
	gcc -o test2 test2.c -lgmp
