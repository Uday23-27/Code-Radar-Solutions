// Your code here...

#include <stdio.h>

int main(){
    int Rows;
    scanf("%d", &Rows);

    int k = 1;
    for(int i = 1; i <= Rows; i++){
        for(int j = 1; j <= i; j++){
            printf("%d ", k);
            k++;
        }
        printf("\n");
    }
}