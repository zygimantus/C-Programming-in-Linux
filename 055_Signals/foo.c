#include <stdio.h>
#include <signal.h>

void myhandle(int mysignal)
{
	printf("myhandle with signal %d\n", mysignal);
}

int main(int argc, char *argv[])
{
	int i = 0;
	signal(SIGTERM, myhandle);

	while(1)
	{
		printf("i = %d\n", i);
		i++;
		sleep(1);
	}

	return 0;
}
