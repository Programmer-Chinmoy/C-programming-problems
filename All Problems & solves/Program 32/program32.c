//program32

#include <stdio.h>

int main(){
    char shut;

    printf("Do you want to Shutdown now?(y/n): ");
    scanf("%c", &shut);

    if("shut == 'y'|| shut == 'Y'"){
        system("C:\\WINDOWS\\System32\\shutdown /s");
    }
    else{
        printf("Ok, No problem.");
    }
    

    return 0;
}