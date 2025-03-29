// Your code here...

#include <stdio.h>

int main(){
    int Rows;
    scanf("%d", &Rows);

    //Print the Upper part of the Diamond [Upper part of the Diamond = Shape of the Pyramid]
    for(int i = 1; i <= Rows; i++){

        //Print the Spacing
        for(int k = Rows; k > i; k--){
            printf(" ");
        }

        //Print the stars
        for(int j = 1; j <= 2 * i - 1; j++){
            printf("*");
        }

        printf("\n");
    }

    //Print the Lower part of the Diamond
    for(int l = Rows - 1; l >= 1; l--){
        
        //Print the Spacing
        for(int n = Rows; n > l; n--){
            printf(" ");
        }

        //Print the stars
        for(int m = 1; m <= 2 * l - 1; m--){
            printf("*");
        }
    }
}