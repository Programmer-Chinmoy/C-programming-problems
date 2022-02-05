//program 5

#include <stdio.h>

int main(){
    char ch;

    printf("Enter a alphabet: ");
    scanf("%c", &ch);

    if(ch == 'a' || ch == 'e' || ch == 'i'  || ch == 'o' || ch == 'u'){
        printf("This is a vowel.\n");
    }
    else if(ch == 'A' || ch == 'E' || ch == 'I'  || ch == 'O' || ch == 'U'){
        printf("This is a vowel.\n");
    }
    else{
        printf("This is a consonant.\n");
    }

    return 0;
}