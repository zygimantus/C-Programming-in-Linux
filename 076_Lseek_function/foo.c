#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
	int fd;
	int ret;
	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	int b;

	fd = open("outfile", O_CREAT | O_APPEND | O_RDWR, 0600);

	if(fd < 0)
	{
		perror("open");
		exit(1);
	}

	/* write something */

	ret = write(fd, (void *) a, sizeof(a));

	if(fd < 0)
	{
		perror("write");
		close(fd);
		exit(1);
	}

	/* seek using lseek */

	ret = lseek(fd, 3*sizeof(int), SEEK_SET);

	if(fd < 0)
	{
		perror("lseek");
		close(fd);
		exit(1);
	}

	/* read form that possition set by lseek */

	ret = read(fd, &b, sizeof(int));

	if(fd < 0)
	{
		perror("lseek");
		close(fd);
		exit(1);
	}

	printf("b = %d\n", b);

	/* seek using lseek */

	ret = lseek(fd, 6*sizeof(int), SEEK_SET);

	if(fd < 0)
	{
		perror("lseek");
		close(fd);
		exit(1);
	}

	/* read form that possition set by lseek */

	ret = read(fd, &b, sizeof(int));

	if(fd < 0)
	{
		perror("lseek");
		close(fd);
		exit(1);
	}

	printf("b = %d\n", b);

	close (fd);

	return 0;
}
