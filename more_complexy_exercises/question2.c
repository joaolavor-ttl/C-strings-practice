/*Write a program in C that reads several words until 
the word "FIM" (END) is entered. For each word read, 
the program must display whether it is a palindrome or not.
After typing "FIM", the program must display how many words
were entered.*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    //read a word from the user
    char word[100];
    //initialize a counter for the number of words entered
    int count = 0;
    printf("enter a word (type 'FIM' or 'fim' to end): ");
    fgets(word, sizeof(word), stdin);
    //remove the newline character from the end of the string
    word[strcspn(word, "\n")]='\0';
    //loop until the user types "FIM" or "fim"
    while (strcmp(word, "FIM")!=0 && strcmp(word, "fim")!=0)
    {
        //increment the counter for the number of words entered
        count++;

        int size = strlen(word);
        //check if the word is a palindrome
        int start = 0;
        int end = size - 1;
        int is_palindrome = 1;
        //loop through the word and compare the characters
        while (start<end)
        {
            if (tolower(word[start]) != tolower(word[end]))
            {
                printf("\n%s is not a palindrome\n", word);
                is_palindrome = 0;
                break;
            }
            start++;
            end--;
        }
        if (is_palindrome)
        {
            printf("\n%s is a palindrome\n", word);
        }
        //read another word from the user
        printf("\nenter another word (type 'FIM' or 'fim' to end): ");
        fgets(word, sizeof(word), stdin);
        word[strcspn(word, "\n")]='\0';
    }
    //display the number of words entered
    printf("\nnumber of words entered: %d\n", count);
    //end the program
    printf("\nprogram ended\n");

    return 0;
}