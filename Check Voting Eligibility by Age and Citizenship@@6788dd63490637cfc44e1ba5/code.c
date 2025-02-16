// Your code here...
#include <stdio.h>

int main(){
    int Age;
    int Status;
    scanf("%d", &Age);
    scanf("%d", &Status);

    if (Age >= 18 && Status == 1){
        printf("Eligible");
    }
    else {
        printf("Not Eligible");
    }
}