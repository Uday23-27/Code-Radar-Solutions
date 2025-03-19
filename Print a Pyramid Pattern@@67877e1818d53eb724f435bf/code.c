// Your code here...

#include <stdio.h>

int main(){
    int Rows;
    scanf("%d", &Rows);

    for(int i = 1; i <= Rows; i++){
        for(int j = Rows; j > i; j--){
            printf(" ");// Left- Spacing;
        }
        for(int k = 1; k <= 2 * i - 1; k++){
            printf("*");
        }
        printf("\n");
    }
}