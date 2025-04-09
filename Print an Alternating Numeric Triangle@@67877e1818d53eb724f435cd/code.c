// Your code here...

#include <stdio.h>

int main(){
    int Rows;
    scanf("%d", &Rows);

    for(int i = 1; i <= Rows; i++){
        for(int j = 1; j <= Rows - i + 1; j++){

            if((i + j) % 2 == 0){
                printf(" 1");
            }
            else{
                printf(" 0");
            }
        }
        printf("\n");
    }
    return 0;
}