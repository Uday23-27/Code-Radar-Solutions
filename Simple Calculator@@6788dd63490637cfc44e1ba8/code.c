// Your code here...
#include <stdio.h>

int main(){
    int Num1;
    int Num2;
    char Sign;

    scanf("%d", &Num1);
    scanf("%d", &Num2);
    scanf("%c", &Sign);

    // int Add = Num1 + Num2;
    // int Sub = Num1 - Num2;
    // int Multi = Num1 * Num2;
    // int Divi = Num1 / Num2;

    if (Sign == '+'){
        printf("%d", Num1 + Num2);
    }
    else if (Sign == '-'){
        printf("%d", Num1 - Num2);
    }
    else if (Sign == '*'){
        printf("%d", Num1 * Num2);
    }
    else if (Sign == '/'){
        if (Num2 != 0){
            printf("%d", Num1 / Num2);
        }
        else{
            printf("error");
        }
    }
}