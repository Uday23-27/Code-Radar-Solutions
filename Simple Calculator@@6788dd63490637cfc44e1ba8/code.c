// Your code here...
#include <stdio.h>

int main(){
    int Num1;
    int Num2;
    char sign;

    scanf("%d", &Num1);
    scanf("%d", &Num2);
    scanf("%c", &sign);

    int Add = Num1 + Num2;
    int Sub = Num1 - Num2;
    int Multi = Num1 * Num2;
    int Divi = Num1 / Num2;

    if (sign == '+'){
        printf("%d", Add);
    }
    else if (sign == '-'){
        printf("%d", Sub);
    }
    else if (sign == '*'){
        printf("%d", Multi);
    }
    else if (sign == '/'){
        if (Num2 != 0){
            printf("%d", Divi);
        }
        else{
            printf("error");
        }
    }
}