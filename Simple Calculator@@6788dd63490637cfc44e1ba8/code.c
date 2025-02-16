// Your code here...
// #include <stdio.h>

// int main(){
//     int Num1;
//     int Num2;
//     char ch;

//     scanf("%d", &Num1);
//     scanf("%d", &Num2);
//     scanf("%c", &ch);

//     if (ch == '+'){
//         printf("%d",Num1 + Num2);
//     }
//     else if (ch == '-'){
//         printf("%d",Num1 - Num2);
//     }
//     else if (ch == '*'){
//         printf("%d",Num1 * Num2);
//     }
//     else if (ch == '/'){
//         printf("%d",Num1 / Num2);
//     }
// }

#include <stdio.h>

int main(){
    int Num1;
    int Num2;
    char ch;

    scanf("%d", &Num1);
    scanf("%d", &Num2);
    scanf(" %c", &ch); // Add a space before %c to ignore leading whitespace

    if (ch == '+'){
        printf("%d", Num1 + Num2);
    }
    else if (ch == '-'){
        printf("%d", Num1 - Num2);
    }
    else if (ch == '*'){
        printf("%d", Num1 * Num2);
    }
    else if (ch == '/'){
        if (Num2 != 0) {
            printf("%d", Num1 / Num2);
        } else {
            printf("Error: Division by zero\n");
        }
    } else {
        printf("Invalid operator\n");
    }

    return 0;
}
