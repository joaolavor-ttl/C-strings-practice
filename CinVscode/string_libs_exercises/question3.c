//enter a name, calculate and display how many letters it countains

#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    char name[100];
    printf("write a name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")]='\0';

    int size=strlen(name);
    printf("the n of characters is: %d\n", size);
    
    return 0;
}
