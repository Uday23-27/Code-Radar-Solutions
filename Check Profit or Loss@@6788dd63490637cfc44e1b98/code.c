// Your code here...
#include <stdio.h>

int main() {
    int Buy;
    int Sell;

    scanf("%d", &Buy);
    scanf("%d", &Sell);

    if (Buy > Sell){
        printf("Loss");
    }
    else if (Buy < Sell){
        printf("Profit");
    }
    else {
        printf("No Profit No Loss");
    }
}