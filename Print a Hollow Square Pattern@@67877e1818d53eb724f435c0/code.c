// Your code here...

#include <stdio.h>

int main(){
    int Rows;
    scanf("%d", &Rows);

    for(int i = 1; i <= Rows; i++){
        for(int j = 1; j <= Rows; j++){
            if(i == 1 || i == Rows || j == 1 || j == Rows){
                printf("*");
            }
            else{
                printf(" ");
            }
            printf("\n");
        }
    }
}