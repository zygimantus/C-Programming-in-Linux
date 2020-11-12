#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>
#include <sys/types.h>
#include <limits.h>
#include <fontl.h>
#include <glob.h>
#include <string.h>

#define LOGDEEP 6

int errfunc(const char *epath, int eerrno)
{
	printf("Error: %s(%d): %s\n", strerror(eerrno), eerrno, epath);
	return 0;
}

int main(int argc, char *argv[])
{
	char logfile1[PATH_MAX];
	char logfile2[PATH_MAX];
	FILE *fp;
	char buf[128];
	int pid;
	int i, j;
	struct stat bstat;
	int fd;
	glob_t globbuf;

	if(argc < 3) {
		fprintf(stderr, "Usage: %s logfile [logfile...] pidfile\n\n", argv[0]);
		exit(0);
	}

	/* get the pid file first */

	if((fp = fopen(argv[1], "r")) == NULL) {
	/* unknown code below */

	return 0;
}
