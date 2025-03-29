// Your code here...

#include <stdio.h>

int main(){
    int Rows;
    scanf("%d", &Rows);

    for(int i = 1; i <= Rows; i++){
        int k = 1;
        for(int j = 1; j <= Rows - i + 1; j++){
            printf("%d ", k);
        }
        printf("\n");
    }
}