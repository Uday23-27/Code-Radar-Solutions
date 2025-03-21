// Your code here...

#include <stdio.h>

int main(){
    int Rows;
    scanf("%d", &Rows);

    for(int i = 1; i <= Rows; i++){
        for(int k = Rows; k > i; k--){
            printf(" ");
        }
        for(int j = 1; j <= Rows; j++){
            printf("*");
        }
        printf("\n");
    }
}