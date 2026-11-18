#include <stdio.h>

int main(){
    FILE *pFile = fopen("result.txt", "w+");
    if (pFile == NULL){
        printf("Could not open file.\n");
        return 1;
    }

    int studentID, totalMarks;
    float percentage, obtainedMarks;

    printf("Enter student ID: ");
    scanf("%d", &studentID);
    printf("Enter student's obtained marks: ");
    scanf("%f", &obtainedMarks);
    printf("Enter the total marks: ");
    scanf("%d", &totalMarks);

    percentage = (obtainedMarks/totalMarks) * 100;
    
    fprintf(pFile, "%d\n", studentID);
    fprintf(pFile, "%.2f\n", obtainedMarks);
    fprintf(pFile, "%d\n", totalMarks);
    fprintf(pFile, "%.2f\n", percentage);

    rewind(pFile);

    int readID, readTotal;
    float readMarks, readPercentage;

    fscanf(pFile, "%d\n", &readID);
    fscanf(pFile, "%f\n", &readMarks);
    fscanf(pFile, "%d\n", &readTotal);
    fscanf(pFile, "%f\n", &readPercentage);  
    
    printf("\nRead Information:\n");
    printf("Student ID [%d] recieved %.2f/%d marks, obtaining a percentage of %.2f%%",
            readID, readMarks, readTotal, readPercentage);

    fclose(pFile);

    return 0;
}