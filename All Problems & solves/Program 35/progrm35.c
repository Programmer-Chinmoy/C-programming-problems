#include <stdio.h>

int main(){
    int N, i;

    while(1){
        printf("Enter the value of N (input -1 to stop the program): ");
        scanf("%d", &N);

        if(N == -1){
            printf("The program is stopped\n");
            break;
        }
        else if(N <= -32){
            for(i=N; i<= -32; i++){
                printf("%d ", i);
            }
        }
        else{
            for(i=N; i>= -32; i--){
                printf("%d ", i);
            }
        }
        printf("\n");
    }
    

    return 0;
}