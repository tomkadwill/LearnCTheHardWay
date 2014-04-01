#include <stdio.h>

int main(int argc, char *argv[])
{
    int i = argc - 1; // remove extra arg of program
    while(i > 0) {
        printf("arg %d: %s\n", i, argv[i]);
        i--;
    }

    return 0;
}

