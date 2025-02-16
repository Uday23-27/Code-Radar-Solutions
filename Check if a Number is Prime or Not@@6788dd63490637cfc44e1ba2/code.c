// Your code here...
#include <stdio.h>

int main(){
    int Num;
    scanf("%d", &Num);

    if (Num % 2 == 0 || Num % 3 == 0){
        printf("Not Prime");
    }
    else{
        printf("Prime");
    }
 }