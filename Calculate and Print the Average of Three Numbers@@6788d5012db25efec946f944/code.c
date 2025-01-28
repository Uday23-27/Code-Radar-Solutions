#include <stdio.h>

int main () {
    float num1 ;
    float num2 ;
    float num3 ;
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);
    float sum = num1 + num2 + num3 ;
    float average = sum/3;
    printf("Average: %.2f\n", average);
    return 0;

}