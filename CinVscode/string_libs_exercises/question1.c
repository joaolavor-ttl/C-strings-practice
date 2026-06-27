//read a name and print the first 4 letters of the name.

#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main()
{
//name lecture;
    char name[30];
    printf("write your name: ");
    fgets(name,sizeof(name), stdin);
    printf("the name %s is %d characters long.\n", name, strlen(name));
    printf("first 4 letters: %.4s\n", name);

    return 0;
}