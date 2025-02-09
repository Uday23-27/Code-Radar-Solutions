#include <stdio.h>

int main(int a, int b){
    return(a > b) ? a : b ; 
}

int main() {
    int Num1;
    int Num2;

    scanf("%d", &Num1);
    scanf("%d", &Num2);

    printf("%d", max(Num1, Num2));
}