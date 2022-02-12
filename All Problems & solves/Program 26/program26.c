//program 26

#include <stdio.h>

int main(){
    char box[100];
    printf("Enter a word or sentence: ");
    scanf("%[^\n]", box);

    int i,length;
    length = 0;

    for(i=0; box[i] != '\0'; i++){
        length = length + 1;
    }
   //printf("The length is: %d\n", length);

    printf("The reverse of the word or sentence is: ");
    for(i=length; i>=0; i--){
        printf("%c", box[i]);
    }
    printf("\n");

    return 0;
}