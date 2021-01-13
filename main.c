#include <stdio.h>

#include "askname.h"

int main(int argc, char **argv)
{
    char first[255], last[255];

    askname(first, last);

<<<<<<< HEAD
    printf("Hello! %s %s!\n", first, last);
=======
    printf("hello earthlings, I made changes , %s %s!\n", first, last);
>>>>>>> d9b4767 (my change!)
    return 0;
}

