#include <stdio.h>

#define X 10000000000000

int main(int argc, char *argv[])
{
	long i;

	double pi = 1.5 * X;

	for(i = 1000; i >= 1; i--)
	{
		pi = (double) i / (i * 2 + 1) * pi + X;
	}

	pi *= 2.0;

	printf("pi = %f\n", pi);

	return 0;
}
