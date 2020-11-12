#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int ret;

	//ret = putenv("MYENV=hello");
	ret = setenv("MYENV", "hello", 0);

	if(ret == -1)
	{
		perror("putenv");
		printf("ret = %d\n", ret);
	}

	ret = system("./printenv");

	perror("system");
	printf("ret = %d\n", ret);

	return 0;
}
