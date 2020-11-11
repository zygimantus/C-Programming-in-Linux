#include <stdio.h>

int main(int argc, char *argv[])
{
	char str[24] = "First string";
	char *ptr = "Second string";

	printf("str = %s\n", str);
	printf("ptr = %s\n", ptr);

	ptr++;
	printf("ptr = %s\n", ptr);

	return 0;
}
