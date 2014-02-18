#include <stdio.h>

int main(int argc, char *argv[])
{
	int distance = 100;
	float power = 2.345f;
	double super_power = 56789.4532;
	char initial = 'A';
	char first_name[] = "Zed";
	char last_name[] = "Shaw";
	int my_oct = 0345;
	int my_hex = 0x3F7;
	char empty_string[] = "";

	printf("You are %d miles away.\n", distance); 
	printf("You have %f levels of power.\n", power);
	printf("You have %f awesome super powers.\n", super_power);
	printf("I have an initial %c.\n", initial);
	printf("I have a first name %s.\n", first_name);
	printf("I have a last name %s.\n", last_name);
	printf("My whole name is %s %c. %s.\n",
		first_name, initial, last_name);
	printf("my octal number is %o.\n", my_oct);
	printf("my hex number is %0x.\n", my_hex);
	printf("here i am trying to print an empty string %s.\n",
		empty_string);

	/* Other printf formats
	u ==> unsigned decimal integer
	o ==> unasigned octal
	x ==> unasigned hexadecimal
	e ==> scientific notation
	g ==> use the shortest representation %e or $f
	a ==> hexidecimal floating point
	p ==> pointer address
	n ==> nothing printed

	X, F, E, G and A can be written as upper case.*/

	return 0;
}
