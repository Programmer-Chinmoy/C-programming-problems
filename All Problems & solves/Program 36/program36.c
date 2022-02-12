#include <stdio.h>

int main(){
    int array[10];
    int i, max = array[0];


    for(i=0; i<10; i++){
        printf("Enter %d no intiger:", i+1);
        scanf("%d", &array[i]);
    }

    for(i=0; i<10; i++){
        if(array[i] > max){
            max = array[i];
        }
    }
    
    printf("The max number is: %d\n", max);

    return 0;
}
