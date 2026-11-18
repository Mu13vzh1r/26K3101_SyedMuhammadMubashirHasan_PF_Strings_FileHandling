#include <stdio.h>
#include <string.h>

int main(){
    char students[5][50] = {0};
    char firstCopy[50], c;

    for (int i = 0; i<5; i++){
        printf("Enter the name of student %d: ", i+1);
        scanf(" %49[^\n]", students[i]);
    }
    printf("Enter the character to search for:");
    scanf(" %c", &c);

    for (int i = 0; i<5; i++){
        printf("Student %d Name: %s\n", i+1, students[i]);
        printf("Length of Name: %d\n", strlen(students[i]));
        
        if (strchr(students[i], c) != NULL){
            printf("Character [%c] was found in this name.\n", c);
        }
        else
            printf("Character [%c] was not found in this name.\n", c);
    }

    strcpy(firstCopy, students[0]);
    printf("\nCopied string: %s", firstCopy);

    return 0;
}