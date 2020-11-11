#define NUM1 5
#define NUM2 8
#define SUM(x,y) x+y

#define ADD

int main(int argc, char *argv[])
{
	int i;
	int k;
	
	int sum;

	i = NUM1;
	k = NUM2;

	sum = SUM(NUM1, NUM2);

	/* This is my comment */

#ifdef ADD

	sum = i + k;

#else
	
	sum = 1 + k + 10;

#endif

	return 0;
}
