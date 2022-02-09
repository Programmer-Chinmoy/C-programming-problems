//program 21

#include <stdio.h>

int square_maker(int y){
    
    int z;
    z = y*y;

    return z;
}

int main(){
    int a,sq;

    printf("Enter a number: ");
    scanf("%d", &a);

    sq = square_maker(a);

    printf("The square of %d is: %d\n", a, sq);

    return 0;
}