#include <stdio.h>
#include <string.h>

int main(){
    char sentence[100] = {0};
    char character;
    char *occurence = NULL;

    printf("Enter a sentence (under 100 characters): ");
    scanf(" %99[^\n]", sentence);

    printf("Enter the character you want to check for: ");
    scanf(" %c", &character);

    occurence = strchr(sentence, character);

    if (occurence != NULL){
        printf("Character [%c] first found at position [%d]\n", character, occurence-sentence+1);
    }
    else{
        printf("Character [%c] not found in sentence.\n", character);
        char cpySentence[100];
        strcpy(cpySentence, sentence);
        printf("Copied Sentence: %s\n", cpySentence);
    }



}