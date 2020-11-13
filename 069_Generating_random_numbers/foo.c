#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[])
{
	srand((unsigned int) time(NULL));

	printf("r1 = %d\n", rand());
	printf("r2 = %d\n", rand());
	printf("r3 = %d\n", rand());

	printf("Dice numbers: \n");

	printf("n1 = %d\n", rand() % 6 + 1);
	printf("n2 = %d\n", rand() % 6 + 1);
	printf("n3 = %d\n", rand() % 6 + 1);
	printf("n4 = %d\n", rand() % 6 + 1);

	return 0;
}
