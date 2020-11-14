#include <stdio.h>
#include <float.h>
#include <math.h>

int main(int argc, char *argv[])
{
	long long int lli_var;
	float f_var;
	double d_var;
	long double ld_var;

	ld_var = 1.12345678901234567 * powl(10, 4931);

	printf("\nLONG LONG INTEGER:\n\n");

	printf("lli_var size = %5d\n", sizeof(lli_var));

	printf("\nFLOAT\n\n");

	printf("f_var size   = %5d\n", sizeof(f_var));
	printf("f_var dig    = %5d\n", FLT_DIG);
	printf("f_var amnt   = %5d\n", FLT_MANT_DIG);
	
	printf("\nDOUBLE\n\n");

	printf("d_var size   = %5d\n", sizeof(d_var));
	printf("d_var dig    = %5d\n", DBL_DIG);
	printf("d_var mant   = %5d\n", DBL_MANT_DIG);

	printf("\nLONG DOUBLE\n\n");

	printf("ld_var size   = %5d\n", sizeof(ld_var));
	printf("ld_var dig    = %5d\n", LDBL_DIG);
	printf("ld_var mant   = %5d\n", LDBL_MANT_DIG);
	printf("ld_var exp    = %5d\n", LDBL_MAX_10_EXP);

	printf("\n");

	printf("ld_var = %5.18Le\n", ld_var);

	return 0;
}
