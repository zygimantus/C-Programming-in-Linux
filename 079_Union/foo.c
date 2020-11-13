#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	union {
		int a;
		int b;
		char s[8];
	} myunion;

	myunion.a = 3;

	printf("a = %d\n", myunion.a);
	printf("b = %d\n", myunion.b);

	myunion.a = 7;

	printf("a = %d\n", myunion.a);
	printf("b = %d\n", myunion.b);

	myunion.b = 9;

	printf("a = %d\n", myunion.a);
	printf("b = %d\n", myunion.b);

	strcpy(myunion.s, "welcome");

	printf("s = %s\n", myunion.s);

	printf("a = %d\n", myunion.a);
	printf("a = %x\n", myunion.a);
	printf("b = %d\n", myunion.b);
	printf("b = %x\n", myunion.b);

	return 0;
}
