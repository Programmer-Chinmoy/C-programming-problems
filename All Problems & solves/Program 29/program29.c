//program 29

#include <stdio.h>

int main(){
    FILE *output_file;

    output_file = fopen("text.txt", "w");

    char a[40];

    gets(a);

    fputs(a, output_file);

    return 0;
}