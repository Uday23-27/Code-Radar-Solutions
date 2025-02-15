// Your code here...
#include <stdio.h>

int main() {
    int Num;
    scanf("%d", &Num);

    if (Num < 0){
        printf("Negative");
    }
    else if (Num == 0){
        printf("Zero");
    }
    else {
        printf("Positive");
    }
}