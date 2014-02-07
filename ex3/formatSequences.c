#include <stdio.h>

int main()
{
	int exInt = 10;
	float exFloat = 5.1;
	double exDouble = 10000000000;

	printf("This is how you format an int: %d.\n", exInt);
	printf("This is how you format a float: %f.\n", exFloat);
	printf("This is how you format a double: %lf.\n", exDouble);

	return 0;
}
