// Your code here...
#include <stdio.h>

int main(){
    int Num1;
    int Num2;
    scanf("%d", &Num1);
    scanf("%d", &Num2);

    if ((Num1 < 0 && Num2 < 0) || (Num1 > 0 && Num2 > 0) || (Num1 == 0 && Num2 == 0)){
        printf("Same Sign");
    }
    else {
        printf("Same Sign");
    }
}