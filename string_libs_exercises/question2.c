//read a name and print the characters at odd positions.

#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    char name[51];
    printf("write your name: ");
    fgets(name,sizeof(name), stdin);
//charcaters at odd positions
    for (int i = 0; i <strlen(name); i++)
    {
        if (i%2!=0)
        {
            printf("%c", name[i]);
        }
    }
    printf("\n");
return 0;
}