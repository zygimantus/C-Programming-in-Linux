#include <stdio.h>

int main(int argc, char *argv[])
{
	int i, j;

	for( i = 2; i <= 1000; i++)
	{
		for(j = 2; j <= i; j++)
		{
			if(j == i)
			{
				/* It's a prime number */
				printf("%d ", i);

			} else if(i%j ==0) {

				/* Not a prime number */
				break;
			}
		}
	}

	printf("\n\n");


	return 0;
}
