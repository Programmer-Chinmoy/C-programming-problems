//program 25

#include <stdio.h>

int main(){
    char box[20];

    printf("Enter a word or sentence: ");
    scanf("%[^\n]", box);

    int i, length;
    length = 0;

    for(i=0; box[i] != '\0'; i++){
        length = length + 1;
    }

    printf("The length of %s is %d\n", box, length);


    return 0;
}