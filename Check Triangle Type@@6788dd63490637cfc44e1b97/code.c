// Your code here...
#include <stdio.h>

int main() {
    int Side1;
    int Side2;
    int Side3;

    scanf("%d", &Side1);
    scanf("%d", &Side2);
    scanf("%d", &Side3);

    if (Side1 == Side2 == Side3){
        printf("Equilateral");
    }
    else if (Side1 != Side2 != Side3){
        printf("Scalene");
    }
    else {
        printf("Isosceles");
    }
}