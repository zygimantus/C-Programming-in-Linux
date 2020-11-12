#include <stdio.h>

extern int num;

int myfunc()
{
	printf("num = %d\n", num);
	return 0;
}
