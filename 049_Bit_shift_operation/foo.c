#include <stdio.h>

int main(int argc, char *argv[])
{
	char bits;

	bits = 8;

	printf("%d\n", bits);

	bits = bits >> 2;

	printf("%d\n", bits);


	return 0;
}
