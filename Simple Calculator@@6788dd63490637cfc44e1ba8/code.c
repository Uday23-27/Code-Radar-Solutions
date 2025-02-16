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
        printf("%d",Add);
    }
    else if (ch == '-'){
        printf("%d",Sub);
    }
    else if (ch == '*'){
        printf("%d",Multi);
    }
    else if (ch == '/'){
        printf("%d",Divi);
    }
}