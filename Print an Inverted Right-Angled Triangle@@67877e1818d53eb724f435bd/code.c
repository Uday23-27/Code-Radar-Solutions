// Your code here...

#include <stdio.h>

int main(){
    int Rows;
    scanf("%d", &Rows);

    for(int i = 1; i <= R; i++){
        for(int j = 1; j <= R - i + 1; j++){
            printf("%c", '*');
        }
        print("\n");
    }
}