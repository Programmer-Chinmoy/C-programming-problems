//program 4

#include <stdio.h>
//I can't understand clearly this code
int main(){
    char ch;

    printf("Enter a alphabet: ");
    scanf("%c", &ch);

    if(ch >='a' && ch <= 'z'){
        printf("%c is lower case\n", ch);
    }
    else if(ch >= 'A' && ch <= 'Z'){
        printf("%c is upper case\n", ch);
    }

    return 0;
}