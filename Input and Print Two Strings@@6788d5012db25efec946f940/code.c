#include <stdio.h>

int main() {
    char str1 [100] ;
    char str2 [100] ;
    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);
    printf("You entered: %s\n", str1);
    printf("You entered: %s\n", str2);
    return 0;
}