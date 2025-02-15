// // Your code here...
// #include <stdio.h>
// #include <math.h>
// int main(){
//     int Side1;
//     int Side2;
//     int Side3;

//     scanf("%d", &Side1);
//     scanf("%d", &Side2);
//     scanf("%d", &Side3);

//     int Power1 = pow(Side1, 2);
//     int Power2 = pow(Side2, 2);
//     int Power3 = pow(Side3, 2);

//     if ((Power1 > Power2 && Power1 > Power3) || (Power2 > Power1 && Power2 > Power3) || (Power3 > Power1 && Power3 > Power2)){
//         if((Power1 == Power2 + Power3) || (Power2 == Power1 + Power3) || (Power3 == Power1 + Power2)){
//             printf("Valid");
//         }
//         else {
//             printf("Invalid");
//         }
//     } 
// }

#include <stdio.h>
#include <math.h>

int main() {
    int Side1, Side2, Side3;

    // Taking input for the three sides
    scanf("%d", &Side1);
    scanf("%d", &Side2);
    scanf("%d", &Side3);

    // Calculate squares of the sides
    int Power1 = pow(Side1, 2);
    int Power2 = pow(Side2, 2);
    int Power3 = pow(Side3, 2);

    // Check if the given sides form a right triangle
    if ((Power1 == Power2 + Power3) || (Power2 == Power1 + Power3) || (Power3 == Power1 + Power2)) {
        printf("Valid\n");  // It is a valid right triangle
    } else {
        printf("Invalid\n");  // It is not a valid right triangle
    }

    return 0;
}
