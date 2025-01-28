#include <stdio.h>

int main() {
    char str1 [100] ;
    char str2 [100] ;
    scanf("%s", &str1);
    scanf("%s", &str2);
    printf("You entered: %.2s\n", str1);
    printf("You entered: %.2s\n", str2);
    return 0;
}