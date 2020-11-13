#include <stdio.h>
#include <string.h>

void trimstring(char *s)
{
	char *p = s;
	int len;

	while(*p == ' ' && *p != '\0')
		p++;

	len = strlen(p);

	memmove(s, p, len+1);

	p = s + len - 1;

	while(*p == ' ' && p>s)
		p--;

	*(++p) = '\0';
}

int main(int argc, char *argv[])
{
	//char str[64] = "         Hello world!        ";
	char str[64] = "";
	printf("1: str = >%s<\n", str);

	trimstring(str);

	printf("2: str = >%s<\n", str);

	return 0;
}
