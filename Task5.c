#include <stdio.h>

int main(){
    char name[50] = {0};
    float obtained_marks = 0, percentage = 0;
    int total_marks = 0;

    printf("Enter your name: ");
    scanf(" %49[^\n]", name);

    printf("Enter your obtained marks: ");
    scanf("%f", &obtained_marks);

    printf("Enter the total marks: ");
    scanf("%d", &total_marks);

    percentage = (obtained_marks/total_marks) * 100;

    FILE *pFile = fopen("student.txt", "w");
    if (pFile == NULL){
        printf("File could not be opened.\n");
        return 1;
    }

    fprintf(pFile, "Name: %s|Marks: %.2f/%d|Percentage: %.2f%%", 
            name, obtained_marks, total_marks, percentage);

    fclose(pFile);

    pFile = fopen("student.txt", "r");
    if (pFile == NULL){
        printf("File could not be opened.\n");
        return 1;
    }

    char restored_name[50] = {0};
    obtained_marks = 0;
    percentage = 0;
    total_marks = 0;

    fscanf(pFile, "Name: %49[^|]|Marks: %f/%d|Percentage: %f", 
            restored_name, &obtained_marks, &total_marks, &percentage);

    printf("Returned DATA:\n");
    printf("Name: %s\n", restored_name);
    printf("Obtained Marks: %.2f\n", obtained_marks);
    printf("Total Marks: %d\n", total_marks);
    printf("Percentage: %.2f%%\n", percentage);



    fclose(pFile);

    return 0;
}