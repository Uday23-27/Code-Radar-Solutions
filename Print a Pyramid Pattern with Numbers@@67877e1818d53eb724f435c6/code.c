// Your code here...

#include <stdio.h>

int main(){
    int Rows;
    scanf("%d", &Rows);

    for(int i = 1; i <= Rows; i++){

        //Print the Spacing
        for(int k = Rows; k > i; k--){
            printf(" ");
        }

        int Num = 1;
        //Print the Numbers
        for(int j = 1; j <= 2 * i - 1; j++){
            printf("%d ", Num);
            Num++;
        }

        printf("\n");
    }
}