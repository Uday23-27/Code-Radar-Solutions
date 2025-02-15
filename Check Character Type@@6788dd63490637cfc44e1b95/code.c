// Your code here...
#include <stdio.h>
#include <ctype.h>
int main(){
    char ch;
    scanf("%c", &ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'u'){
        printf("Vowel");
    }
    else if (isalpha(ch)){
        printf("Constant");
    }
    else if (isdigit(ch)){
        printf("Digit");
    }
    else {
        printf("Special Character");
    }
}