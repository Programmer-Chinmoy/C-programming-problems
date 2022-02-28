//program 38
#include <stdio.h>

int main(){
    FILE *fp;

    fp = fopen("Demo_file.txt", "w");

    int i;
    for(i = 97; i<122; i++){
        fputc(i, fp);
    }

    fclose(fp);

    return 0;
}
