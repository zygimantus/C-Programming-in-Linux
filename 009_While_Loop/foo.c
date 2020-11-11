#include <stdio.h>

int main(int argc, char *argv[])
{
	int i = 10;

	while (i < 20)
	{
		printf("i = %d\n", i);
		i++;
	} 

	i = 10;
	do {
		printf("i = %d\n", i);
	} while (i < 5);

	return 0;
}
