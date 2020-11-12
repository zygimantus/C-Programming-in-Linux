#include <stdio.h>

typedef enum day {
	Sunday = 1,
	Monday,
	Tuesday,
	Wednesday,
	Thursday,
	Friday,
	Saturday
} schedday;

int main(int argc, char *argv[])
{
	schedday myday;

	printf("Sunday = %d\n", Sunday);
	printf("Monday = %d\n", Monday);
	printf("Tuesday = %d\n", Tuesday);
	printf("Wednesday = %d\n", Wednesday);
	printf("Thursday = %d\n", Thursday);
	printf("Friday = %d\n", Friday);
	printf("Saturday = %d\n", Saturday);

	myday = Wednesday;

	printf("myday = %d\n", myday);

	return 0;
}
