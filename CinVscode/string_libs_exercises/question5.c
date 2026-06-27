#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main()
{
    //read a string
    char name[100];
    printf("enter a name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")]='\0';
    printf("the name is:%s", name);

    float vowels=0;
    float size=strlen(name);
    for (int i = 0; i < size; i++)
    {
        switch(tolower(name[i]))
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            vowels++;
            break;
        }
    }
    printf("\nthe number of vowels is: %.1f", vowels);
    printf("\nthe number of character in the name is %.1f", size);
    
    float media=0;
    media=(vowels/size)*100;
    printf("\n(%.1f%%)", media);

    return 0;
}
