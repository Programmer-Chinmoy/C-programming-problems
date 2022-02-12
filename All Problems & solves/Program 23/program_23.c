#include <stdio.h>
int main(){
    double math[2][5];
    int c,r;

    for(c=0; c<2; c++){
        for(r=0; r<5; r++){
            scanf("%lf", &math[c][r]);
        }
    }

    for(c=0; c<2; c++){
        for(r=0; r<5; r++){
            printf("Class:%d Roll:%d Marks: %lf\n", c+6, r+1, math[c][r]);
        }
    }

    return 0;
}