#include <stdio.h>

int main(){
    int accNumber = 0;
    int amount = 0;

    printf("Enter your account number: ");
    scanf("%d", &accNumber);

    printf("Enter your first transaction amount: ");
    scanf("%d", &amount);

    FILE *pFile = fopen("bank.txt", "w");
    if (pFile == NULL){
        printf("Could not open file.\n");
        return 1;
    }

    fprintf(pFile, "Account Number: %d First Transaction Amount: %d", accNumber, amount);
    fclose(pFile);

    pFile = fopen("bank.txt", "a");
    if (pFile == NULL){
        printf("Could not open file.\n");
        return 1;
    }    

    printf("Enter the new transaction amount: ");
    scanf("%d", &amount);

    fprintf(pFile, "Second Transaction Amount: %d", amount);

    fclose(pFile);

    pFile = fopen("bank.txt", "r");
    if (pFile == NULL){
        printf("Could not open file.\n");
        return 1;
    }    

    int readAccountNo = 0;
    int readFirstAmount = 0;
    int readSecondAmount = 0;
    
    fscanf(pFile, "Account Number: %d First Transaction Amount: %d", &readAccountNo, &readFirstAmount);
    fscanf(pFile, "Second Transaction Amount: %d", &readSecondAmount);

    printf("\nRead Information:\n");
    printf("Account Number: %d\n", readAccountNo);
    printf("First Transaction Amount: %d\n", readFirstAmount);
    printf("Second Transaction Amount: %d\n", readSecondAmount);
    

    fclose(pFile);

}