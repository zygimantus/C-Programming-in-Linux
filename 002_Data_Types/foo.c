#include <stdio.h>

int main(int argc, char *argv[])
{
	int k;
	int zznum;
	int sumnum;

	char mychar;

	printf("Hello World\n");

	k = 24;

	printf("Value of k = %d\n", k);

	zznum = 4;

	printf("Value of zznum = %d\n", zznum);

	printf("Values of two vars are: %d and %d\n", k, zznum);

	sumnum = k + zznum;

	printf("Total is %d\n", sumnum);

	mychar = 'c';

	printf("mychar is %c\n", mychar);
	printf("mychar is %d\n", mychar);

	return 0;
}
