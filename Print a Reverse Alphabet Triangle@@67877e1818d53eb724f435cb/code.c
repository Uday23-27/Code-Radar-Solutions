// Your code here...

#include <stdio.h>

int main(){
    int Rows;
    printf("Enter Rows: ");
    scanf("%d", &Rows);

    for(int i = 1; i <= Rows; i++){
        int k = 'A';
        for(int j = 1; j <= Rows; j++){
            printf("%c ", k);
            k++;
        }
        printf("\n");
    }
}