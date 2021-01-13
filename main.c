#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
    //char first[255], last[255];

<<<<<<< HEAD
    printf("Enter your first name: ");
    fgets(first, 255, stdin);
    first[strlen(first)-1] = '\0'; /* remove the newline at the end */
=======
    fgets(name, 255, stdin);
    printf("length = %d\n", strlen(name)); /* debug line */
    name[strlen(name)-1] = '\0'; /* remove the newline at the end */
>>>>>>> 2ed41da5c7deb331224e7b9f37ee8383fe0f18f8

    printf("Now enter your last name: ");
    gets(last); /* buffer overflow? what's that? */

//    printf("Hello %s %s!\n", first, last);
    return 0;
}
