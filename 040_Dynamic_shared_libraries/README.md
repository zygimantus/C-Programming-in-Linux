gcc -shared -o libmoo.so moo.c
gcc -o foo foo.c -L. -lmoo
export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:.
ldd foo
