#include <stdio.h>

int main () {
    float num1 ;
    float num2 ;

    scanf("%f", &num1);
    scanf("%f", &num2);

    float Product = num1 * num2;

    printf("Product: %.2f", Product);
    return 0;
}