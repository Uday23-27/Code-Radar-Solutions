#include <stdio.h>

int main () {
    int num1 ;
    int num2 ;
    int num3 ;
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);
    int sum = num1 + num2 + num3 ;
    float average[4] = sum/3;
    printf("Average: %f\n", average);
    return 0;

}