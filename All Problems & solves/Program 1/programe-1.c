//program 1

#include <stdio.h>

int main()
{
    int num1;

    printf("Enter the number: ");
    scanf("%d", &num1);

    if(num1 < 0){
        printf("The number is negative.\n");
    }
    else if(num1 > 0){
        printf("The number is positive.\n");
    }
    else if("num1==0"){
        printf("The number is zero!\n");
    }

    return 0;
}