//program 39

#include <stdio.h>

int main(){

    FILE *a;

    a = fopen("Demo.txt","w");

    char arr[100]="Hello! Code runed successfully.";

    fputs(arr, a);

    //Another method:

    fprintf(a, "Hello! the code runned successfully. Here is the result:%d", 156);

    fclose(a);


    return 0;
}
