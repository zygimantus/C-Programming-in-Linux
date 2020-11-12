gcc -c moo.c
ar -cvq libmoo.a moo.o
ranlib libmoo.a
gcc -o foo foo.c libmoo.a
