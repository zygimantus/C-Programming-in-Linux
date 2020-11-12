#include <stdio.h>

int main(int argc, char *argv[])
{
	int a;

	a = 2;

	{
		int b;
		int a;

		b = 4;
		a = 4;

		printf("b = %d\n", b);
		printf("inner a = %d\n", a);

		{
			int a;
			a = 7;
			printf("inner inner a = %d\n", a);
		}
	}

	printf("outer a = %d\n", a);

	return 0;
}
