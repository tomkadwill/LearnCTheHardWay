#include <stdio.h>

int main(int argc, char *argv[])
{
    int i = 0;

    // go through each string in argv
    // why am I skipping argv[0]?
    for(i = 1; i < argc; i++) {
	if (i == 1) {
		printf("tom told me to break");
		break;
	}
        printf("arg %d: %s\n", i, argv[i]);
    }

    // lets make our own array of strings
    char *states[] = {
        "Calafornia", "Oregan",
        "Washington", "Texas"
    };
    int num_states = 4;

    for(i = 0; i < num_states; i++) {
        printf("arg %d: %s\n", i, states[i]);
    }

    return 0;
}
