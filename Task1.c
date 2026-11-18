#include <stdio.h>
#include <string.h>

int main(){
    char fullName[50] = {0};
    char nameCopy[100] = {0};

    printf("Enter your full name: ");
    scanf(" %49[^\n]", fullName);

    int nameLength = strlen(fullName);
    printf("Length of Name: %d\n", nameLength);

    strcpy(nameCopy, fullName);

    printf("Original String: %s\n", fullName);

    strcat(nameCopy, " - FAST University");

    printf("Modified String: %s\n", nameCopy);

    return 0;
}