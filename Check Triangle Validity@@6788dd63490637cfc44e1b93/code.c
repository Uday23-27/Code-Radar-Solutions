// Your code here...
#include <stdio.h>
#include <math.h>
int main(){
    int Side1;
    int Side2;
    int Side3;

    scanf("%d", &Side1);
    scanf("%d", &Side2);
    scanf("%d", &Side3);

    int Power1 = pow(Side1, 2);
    int Power2 = pow(Side2, 2);
    int Power3 = pow(Side3, 2);

    if (Power1 > Power2 && Power1 > Power3){
        if (Power1 = Power2 + Power3){
            printf("Valid");
        }
    }
    else if (Power2 > Power1 && Power2 > Power3){
        if (Power2 = Power1 + Power3){
            printf("Valid");
        }
    }
    else if (Power3 > Power2 && Power3 > Power1){
        if (Power3 = Power2 + Power1){
            printf("Valid");
        }
    }
}