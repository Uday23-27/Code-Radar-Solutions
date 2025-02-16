// Your code here...
#include <stdio.h>

int main(){
    char Colour;
    scanf(" %c", &Colour);

    switch(Colour){
        case "R" : printf("Stop");
                break;
        case "Y" : printf("Slow Down");
                break;
        case "G" : printf("Go");
                break;
        default : printf("Invalid input");
                break;
    }
}