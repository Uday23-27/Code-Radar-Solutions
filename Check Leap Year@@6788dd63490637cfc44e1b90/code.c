// Your code here...
#include <stdio.h>

int main(){
    int Year;
    scanf("%d", &Year);

    if (Year % 4 == 0 && Year % 400 == 0){
        printf("Leap Year");
    }
    else {
        printf("Not a Leap Year");
    }
}