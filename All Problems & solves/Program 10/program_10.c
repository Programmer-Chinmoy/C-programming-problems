//program 10

//code for define the largest number(তিনটি সংখ্যার মধ্যে)

#include <stdio.h>

int main(){
    int a,b,c;

    printf("Enter 1st number: ");
    scanf("%d",&a);
    
    printf("Enter 2nd number: ");
    scanf("%d",&b);
    
    printf("Enter 3rd number: ");
    scanf("%d",&c);
    
    if(a>b && a>c)
        printf("larget number is %d\n",a);
    else if(b>a && b>c)
        printf("larget number is %d\n",b);
    else
        printf("larget number is %d\n",c);
    return 0;
}