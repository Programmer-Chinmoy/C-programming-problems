#include <stdio.h>

int main(){
    char a[30], b[30];
    scanf("%s", a);

    scanf("%s", b);



    int i,j,length;
    for(i=0; a[i] != '\0'; i++){
        length = length + 1;
    }

    //printf("The lenght is: %d\n", length);
    
    for(i=length, j=0; b[j] != '\0'; i++, j++){
        a[i] = b[j];
    }
    a[i] = '\0';
    printf("%s\n", a);
    return 0;
}