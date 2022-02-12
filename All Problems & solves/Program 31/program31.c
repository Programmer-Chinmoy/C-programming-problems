//program 31

#include <stdio.h>

int let (char b[30]){
    int i,j;
    j = 0;
    for(i=0; b[i] != '\0'; i++){
       j = j+1;
    }

    return j;
}


int main(){

    char a[50];
    scanf("%[^\n]", a);

    int length = let(a);

    printf("The length is: %d\n",length);
    return 0;
}