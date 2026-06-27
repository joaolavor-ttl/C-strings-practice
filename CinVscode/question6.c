#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    char frase[100];

    printf("Fale uma frase massa:");
    fgets(frase, sizeof(frase), stdin);

    frase[strcspn(frase, "\n")] = '\0';

    int size = strlen(frase);
    int palavras = 1;

    for (int i = 0; i < size; i++)
    {
        if (frase[i] == ' ')
        {
            palavras++;
        }
    }
    printf("A frase tem %d palavras.\n", palavras);

    return 0;
}