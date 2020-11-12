#include <stdio.h>

int num;

int myfunc();

int myfun()
{
	static int i = 0;

	i += 2;
	printf("i = %d\n", i);
	i += 2;
	printf("i = %d\n", i);
	printf("\n");
	return 0;
}

int main(int argc, char *argv[])
{
	num = 4;
	//myfunc();
	myfun();
	myfun();

	return 0;
}
