// Your code here...
#include <stdio.h>

int main(){
    int Num1;
    int Num2;
    scanf("%d", &Num1);
    scanf("%d", &Num2);
    int Num3 = Num2 * Num2;
    
    if (Num1 == Num3){
        printf("Yes");
    }
    else {
        printf("No");
    }

}