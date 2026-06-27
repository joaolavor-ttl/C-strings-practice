/*Write a program in C that reads several words 
until the word "FIM" (END) is entered. 
After reading the sentence, the program should 
display the sentence, replacing the character 'A' with '#'.
Question modified to read a sentence regardless of the word
 "FIM" and replace the character.*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    //read a sentence from the user
    char sentence[1000];
    printf("enter a sentence type 'FIM' or 'fim' to end: ");
    fgets(sentence, sizeof(sentence), stdin);
    //remove the newline character from the end of the string
    sentence[strcspn(sentence, "\n")]='\0';
    //loop until the user types "FIM" or "fim"
    while(strcmp(sentence, "FIM")!=0 && strcmp(sentence, "fim")!=0){
    //replace the character 'A' with '#'
    int size=strlen(sentence);
        for(int i=0; i<size; i++){
            if(toupper(sentence[i])=='A'){
                sentence[i]='#';
            }
        }
        //display the modified sentence
        printf("modified sentence: %s\n", sentence);
        //read another sentence from the user
        printf("\nenter a sentence (type 'FIM' or 'fim' to end): ");
        fgets(sentence, sizeof(sentence), stdin);
        sentence[strcspn(sentence, "\n")]='\0';   
    }
    printf("program ended\n");

    return 0;
}