#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int main(int argc, char *argv[])
{
	int i;

	printf("Begin...\n");

	for(i = 0; i < 10; i++)
	{
		printf("i = %d\n", i);
		assert(i <= 5);
	}

	abort();

	printf("Begin...\n");

	return 0;
}
