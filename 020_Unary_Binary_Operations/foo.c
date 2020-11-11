#include <stdio.h>

int main(int argc, char *argv[])
{
	int a, b, sum;

	/* Example 1 */
	a = 4;
	a++;
	printf("a = %d\n", a); 

	/* Example 2 */
	a = 2;
	a += 4;
	printf("a = %d\n", a); 

	/* Example 3 */
	a = 7;
	a--;
	printf("a = %d\n", a); 

	/* Example 4 */
	a = 4;
	a -= 3;
	printf("a = %d\n", a); 

	/* Example 5 */
	a = 4;
	a *= 3;
	printf("a = %d\n", a); 

	/* Example 6 */
	a = 20;
	a /= 4;
	printf("a = %d\n", a); 

	/* Example 7 */
	a = 6;
	printf("Unary: a = %d\n", a++);
	printf("Unary: a = %d\n", a); 

	/* Example 8 */
	a = 6;
	printf("\n");
	printf("Unary: a = %d\n", ++a);
	printf("Unary: a = %d\n", a); 

	return 0;
}
