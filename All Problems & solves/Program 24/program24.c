//program 24

#include <stdio.h>

int main(){
    char str[15];

    scanf("%s", str);

    int i,length;
    
    length = 0;

    for(i=0; str[i] != '\0'; i++){
        length = length + 1;
    }

    printf("Length of %s is %d\n", str, length);

    return 0;
}