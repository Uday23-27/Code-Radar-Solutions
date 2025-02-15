// Your code here...
#include <stdio.h>

int main(){
    int Num;
    scanf("%d", &Num);

    if (Num % 3 == 0){
        printf("Divisible by 3");
    }
    else if (Num % 5 == 0){
        printf("Divisible by 5");
    }
    else if (Num % 3 == 0 && Num % 5 == 0){
        printf("Divisible by  Both");
    }
    else {
        printf("Not Divisible");
    }
}