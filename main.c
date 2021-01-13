#include <stdio.h>

#include "askname.h"

int main(int argc, char **argv)
{
    char first[255], last[255];

    askname(first, last);

<<<<<<< HEAD
<<<<<<< HEAD
    printf("Hello! %s %s!\n", first, last);
=======
    printf("hello earthlings, I made changes , %s %s!\n", first, last);
>>>>>>> d9b4767 (my change!)
=======
    printf("Hello! %s %s!\n", first, last);
>>>>>>> 33fe8b4 (okaaaay)
    return 0;
}

