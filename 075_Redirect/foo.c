#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
	int fd, fd2;
	int ret;

	fd = open("out.txt", O_CREAT | O_APPEND | O_WRONLY);

	if(fd < 0)
	{
		perror("open");
		exit(1);
	}

	fd2 = open("outerr.txt", O_CREAT | O_APPEND | O_WRONLY);

	ret = dup2(fd, 1);

	if(ret < 0)
	{
		perror("dup2 out");
		exit(1);
	}

	ret = dup2(fd2, 2);

	if(ret < 0)
	{
		perror("dup2 err");
		exit(1);
	}


	system("ls /tmp /tmp3");

	close(fd);
	close(fd2);

	return 0;
}
