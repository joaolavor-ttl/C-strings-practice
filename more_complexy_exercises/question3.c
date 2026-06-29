/*Write a C program to read a sentence from the user.
Calculate and display the number of words that make up
this sentence. For example, if the sentence entered by
the user was:'Good luck dear students', the program should 
display: 4;*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char sentence[100];
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    sentence[strcspn(sentence, "\n")] = 0; // Remove newline character if present

    int word_count = 0;
    int in_word = 0; // Flag to track if we are inside a word
    int size=strlen(sentence);

    for(int i=0; i<size; i++){
        if(!isspace(sentence[i]) && !in_word){
            in_word = 1; // We are now inside a word
            word_count++; // Increment word count
        } else if(isspace(sentence[i])){
            in_word = 0; // We are now outside a word
        }
    }
    printf("Number of words: %d\n", word_count);

    return 0;
}
