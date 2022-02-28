//Progarm 42

// -----------------------------
// Note:
// Space ASCll is 32
// New line ASCll is 10
// -----------------------------

#include <stdio.h>

int main(){
    FILE *a;

    a = fopen("text.txt", "r");

    int h;
    int vCounter = 0, cCounter = 0, sCounter = 0, nCounter = 0;

    while(1){
        h = fgetc(a);

        if(h == EOF){
            break;
        }

        if(h == 32){
            sCounter++;
        }
        else if(h == 'a' || h == 'e' || h == 'i' || h == 'o' || h == 'u'){
            vCounter++;
        }
        else if(h == 'A' || h == 'E' || h == 'I' || h == 'O' || h == 'U'){
            vCounter++;
        }
        else if(h == 10){
            nCounter++;
        }
        else{
            cCounter++;
        }

       
    }

        printf("Vowel: %d\n", vCounter);
        printf("Consonant: %d\n", cCounter);
        printf("Space: %d\n", sCounter);
        printf("New line: %d\n", nCounter);


    return 0;
}