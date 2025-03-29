// Your code here...

#include <stdio.h>

int main(){
    int Rows;
    scanf("%d", &Rows);

    for(int i = 1; i <= Rows; i++){
        int ch = 'A';
        for(int j = 1; j <= i; j++){
            printf("%c ", ch);
            ch++;
        }
        printf("\n");
    }
}