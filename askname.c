#include <stdio.h>
#include <string.h>

void askname(char *first, char *last)
{
<<<<<<< HEAD
    printf("Enter your first name pls: My name is Nastya. aaaaaaaaaaaaaaaa");
=======
    printf("Enter your first name pls: ");
>>>>>>> 33fe8b4 (okaaaay)
    fgets(first, 255, stdin);
    first[strlen(first)-1] = '\0'; /* remove the newline at the end */

    printf("Now enter your last name: ");
    gets(last); /* buffer overflow? what's that? */
}
