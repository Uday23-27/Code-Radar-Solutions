// Your code here...
#include <stdio.h>

int main(){
    int Num;
    scanf("%d", &Num);

    if (Num % 5 == 0 && Num % 11 == 0){
        printf("Divisible");
    }
    else {
        printf("Not Divisible");
    }
}