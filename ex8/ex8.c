#include <stdio.h>

int main(int argc, char *argv[])
{
	int areas[] = {areas[0] = 10, 12, 13, 14, 20};
	char name[] = "Zed";
	char full_name[] = {
		'Z', full_name[1] = 'i', 'd',
		' ', 'A', '.', ' ',
		'S', 'h', 'a', 'w', '\0'
	};

	// WARNING: On some systems you may change the 
	// %ld in this code to a %u since it will use unsigned ints
	printf("The size of an int: %ld\n", sizeof(int));
	printf("The size of areas (int[]): %ld\n",
		sizeof(areas));
	printf("The number of ints in areas: %ld\n",
		sizeof(areas) / sizeof(int));
	printf("The first area is %d, the 2nd %d.\n",
		areas[0], areas[1]);
	
	printf("The size of a char: %ld\n", sizeof(char));
	printf("The size of a name (char[]): %ld\n",
		sizeof(name));
	printf("The number of chars: %ld\n",
		sizeof(name) / sizeof(char));

	printf("The size of full_name (char[]): %ld\n",
		sizeof(full_name));
	printf("The number of chars: %ld\n",
		sizeof(full_name) / sizeof(char));

	printf("name=\"%s\" and full_name=\"%s\"\n",
		name, full_name);

	return 0;
}

// why does line 27 return 4 instead of 3?
// ** I think its because it it looking at the pointer

// ints are stored differently depending on comp archatecture
// as 32-bit was so popular ints are typically 4bytes (windows and linux)
// However, windows and linux differ on the length of 'long'
