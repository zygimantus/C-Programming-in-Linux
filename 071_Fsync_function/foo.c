#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
	char *str = "This is a string to go to the file.";

	int fd;
	int ret;

	fd = creat("Hello.txt", S_IWUSR | S_IRUSR);

	if(fd < -1)
	{
		perror("creat()");
		exit(1);
	}

	ret = write(fd, str, strlen(str));

	if(ret < -1)
	{
		perror("write()");
		exit(1);
	}

	//fsync(fd);
	
	/*
		very long lines of code then use fsync
	*/

	close(fd);

	return 0;
}
