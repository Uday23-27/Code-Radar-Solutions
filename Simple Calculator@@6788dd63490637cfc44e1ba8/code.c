// Your code here...
#include <stdio.h>

int main(){
    int Num1;
    int Num2;
    char ch;

    scanf("%d", &Num1);
    scanf("%d", &Num2);
    scanf("%s", &ch);

    if (ch == '+'){
        printf("%d",Num1 + Num2);
    }
    else if (ch == '-'){
        printf("%d",Num1 - Num2);
    }
    else if (ch == '*'){
        printf("%d",Num1 * Num2);
    }
    else if (ch == '/'){
        printf("%d",Num1 / Num2);
    }
}