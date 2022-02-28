//program 40

#include <stdio.h>

int main(){

    FILE *file;

    file = fopen("Demo.txt", "a");

    char arr[100] = "Hello! the code runed successfully.";

    fputs(arr, file);



    fclose(file);



    return 0;
}
