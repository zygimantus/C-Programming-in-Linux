#include <stdio.h>

int main(int argc, char *argv[])
{
	int myint;
	char mychar;

	float mynum;

	long int mylongint;
	double mydouble, mysumdb;

	myint = 24;
	mychar = 'c';

	printf("myint and mychar are %d and %c\n", myint, mychar);

	mynum = 24.4;

	printf("mynum = %f\n", mynum);

	printf("size of int = %d\n", sizeof(int));
	printf("size of myint = %d\n", sizeof(myint));

	printf("size of char = %d\n", sizeof(char));
	printf("size of char = %d\n", sizeof(mychar));

	printf("size of float = %d\n", sizeof(float));
	printf("size of mynum = %d\n", sizeof(mynum));

	printf("size of long int = %d\n", sizeof(long int));
	printf("size of long int = %d\n", sizeof(mylongint));

	printf("size of double = %d\n", sizeof(double));
	printf("size of double = %d\n", sizeof(mydouble));

	mydouble = 243.25;
	mysumdb = 3.5 + mydouble;

	printf("mysumdb = %f\n", mysumdb);

	myint = 3;

	mysumdb = 3.2 + myint;

	printf("mysumdb = %f\n", mysumdb);

	mysumdb = 22.4 + 4.0;

	printf("mysumdb = %f\n", mysumdb);

	return 0;
}
