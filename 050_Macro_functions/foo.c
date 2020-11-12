#include <stdio.h>

#define addnum(x,y) x+y

int sumnum(int x, int y)
{
	int total;
	total = x + y;
	return total;
}

int main(int argc, char *argv[])
{
	int a, b;
	int sum;

	a = 3;
	b = 4;

	sum = addnum(a,b);

	printf("sum = %d\n", sum);

	return 0;
}
