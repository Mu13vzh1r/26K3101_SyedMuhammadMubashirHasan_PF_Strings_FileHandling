#include <stdio.h>
#include <string.h>

int main(){
    char product1[20] = {0};
    char product2[20] = {0};

    //assuming spaces aren't allowed
    printf("Enter the name for the first product: ");
    scanf(" %s", product1);
    printf("Enter the name for the second product: ");
    scanf(" %s", product2);

    if (strcmp(product1, product2) == 0){
        printf("The product names are identical.\n");
    }
    else
        printf("The product names are different.\n");

    printf("Length of product 1 [%d]\nLength of product 2 [%d]", 
            strlen(product1), strlen(product2));

    
    return 0;
}