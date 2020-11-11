#include <stdio.h>
#include <stdlib.h>

int comparefunc(const void *a, const void *b)
{
	int aa, bb;

	aa = *(int *)a;
	bb = *(int *)b;

	return (aa - bb);
}

int main(int argc, char *argv[])
{
	int numbers[] = { 5, 2, 23, 14, 7, 8, 42, 1, 33, 10 };
	int i;

	printf("Before Sort\n");
	for (i = 0; i < 10; i++)
		printf("%d \n", numbers[i]);

	printf("\n");

	qsort(numbers, 10, sizeof(int), comparefunc);

	printf("After Sort\n");
	for (i = 0; i < 10; i++)
		printf("%d \n", numbers[i]);

	printf("\n");


	return 0;
}
