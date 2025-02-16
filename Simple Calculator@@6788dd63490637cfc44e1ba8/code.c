// Your code here...
#include <stdio.h>

int main(){
    int Num1;
    int Num2;
    char ch;

    scanf("%d", &Num1);
    scanf("%d", &Num2);
    scanf("%c", &ch);

    int Add = Num1 + Num2;
    int Sub = Num1 - Num2;
    int Multi = Num1 * Num2;
    int Divi = Num1 / Num2;

    if (ch == '+'){
        printf(Add);
    }
    else if (ch == '-'){
        printf(Sub);
    }
    else if (ch == '*'){
        printf(Multi);
    }
    else{
        printf(Divi);
    }
}