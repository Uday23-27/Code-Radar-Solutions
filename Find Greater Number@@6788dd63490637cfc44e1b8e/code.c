#include <stdio.h>

int main(){
    int Num1;
    int Num2;

    scanf("%d", &Num1);
    scanf("%d", &Num2);

    if (Num1 > Num2){
        printf("%d", Num1);
    }
    else{
        printf("%d", Num2);
    }
}