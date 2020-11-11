#include <stdio.h>

/* This is the source code for adding two
   numbers and returns the sum. It is
   for C programming in Linux.
*/

/* This function adds two numbers */
/* it returns the sum		  */

int add_numbers(int a, int b)
{
	int sum; /* variable to take the sum */

	/* add the numbers */
	sum = a + b;

	/* return the sum */
	return sum;
}

/* This is my main function */
int main(int argc, char *argv[])
{
	int result;

	/* call the add_numbers function */
	result = add_numbers(4, 3);

	printf("sum is %d\n", result); /* print the sum value */

	return 0;
}
