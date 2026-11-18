#include <stdio.h>

int main(){
    float obtainedMarks = 0;
    int totalMarks = 0;

    FILE *pFile = fopen("marks.txt", "r+");

    if (pFile == NULL){
        printf("Could not open file.\n");
        return 1;
    }

    fscanf(pFile, "Obtained Marks: %f\n", &obtainedMarks);
    fscanf(pFile, "Total Marks: %d", &totalMarks);

    printf("Students Marks: %.2f/%d\n", obtainedMarks, totalMarks);

    printf("Enter the updated marks: ");
    scanf("%f", &obtainedMarks);

    rewind(pFile);

    fprintf(pFile, "Obtained Marks: %.2f", obtainedMarks);

    fclose(pFile);

    pFile = fopen("marks.txt", "r");
    if (pFile == NULL){
        printf("Could not open file.\n");
        return 1;
    }

    float readMarks = 0;

    fscanf(pFile, "Obtained Marks: %f", &readMarks);

    printf("Updated Marks: %.2f", readMarks);

    fclose(pFile);

    return 0;
}