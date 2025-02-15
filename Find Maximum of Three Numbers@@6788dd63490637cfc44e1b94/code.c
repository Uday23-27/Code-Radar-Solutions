// Your code here...
#include <stdio.h>

int main(){
    int Num1;
    int Num2;
    int Num3;

    scanf("%d", &Num1);
    scanf("%d", &Num2);
    scanf("%d", &Num3);

    if (Num1 > Num2 && Num1 > Num3){
        printf("%d", Num1);
    }
    else if (Num2 > Num3){
        printf("%d", Num2);
    }
    else{
        printf("%d", Num3);
    }
}