//

#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main()
{
    
    char name[100];
    printf("enter a name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")]='\0';

    if (tolower(name[0])=='a')
    {
        printf("\n%s", name);
    }
    
    return 0;
}