#include <stdio.h>

int main(){
    int i[5], oddSum = 0, evenSum = 0, j;

    printf("Enter 5 numbers: ");
    for(j=0; j<5; j++){
        scanf("%d", &i[j]);
    }

    for(j=0; j<5; j++){
        if(i[j] % 2 == 0){
            evenSum = evenSum + i[j];
        }
    }

    for(j=0; j<5; j++){
        if(i[j] % 2 != 0){
            oddSum = oddSum + i[j];
        }
    }
    
    printf("\n");

    printf("Values of array: ");
    for(j=0; j<5; j++){
        printf("%d ", i[j]);
    }

    printf("\n");

    printf("Sum of odd values: %d\n", oddSum);
    printf("Sum of even values: %d\n", evenSum);


    return 0;
}