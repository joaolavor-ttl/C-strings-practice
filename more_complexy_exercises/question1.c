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
    
    char sentence[1000];
    printf("enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    sentence[strcspn(sentence, "\n")]='\0';

    int size=strlen(sentence);
    for(int i=0; i<size; i++){
        if(toupper(sentence[i])=='A'){
            sentence[i]='#';
        }
    }
    return 0;
}