#include <stdio.h>

int main(int argc, char *argv[])
{
	int i = 0;
	# C is statically typed to must declare type of variable in advance.
	
	# argc counts the number of variables passed into the program
	if(argc == 0) {
		printf("You only have one argument. You suck.\n");
	} else if (argc > 1 && argc < 4) {
		printf("here's your arguments:\n");

		# set i to 0. Continue looping as long as i is still less than argc
		# (number of variabled passed into the program)
		# then increment i by 1
		for(i = 0; i < argc; i++) {
			printf("%s ", argv[i]);
		}
		printf("\n");
	} else {
		printf("You have too many arguments. You suck.\n");
	}
	
	return 0;
}
