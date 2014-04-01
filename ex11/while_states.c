#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int args = 0;

    char *states[] = {
        "Calafornia", "Oregan",
        "Washington", "Texas"
    };

    int states_array = sizeof(states)/sizeof(states[0]);

    if (states_array > (argc - 1)) {
        int i = 1;
        while (i < argc) {
            states[i-1] = argv[i];
            i++;
        }
        args = argc - 1;
    } else {
        args = states_array;
    }

    int i = 0;
    while (i < args) {
        printf("element: %s\n", states[i]);
        i++;
    }

    return 0;
}

