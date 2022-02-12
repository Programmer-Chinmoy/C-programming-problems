//Program 34

#include <stdio.h>

int main(){
    int i, j, a;

    printf("Enter a start number: ");
    scanf("%d", &a);

    for(i=0; i<a; i++){
        for(j=i; j<a; j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
