#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    
/*  Student: Mariano Renan da Silva 
    Exercise 5: Given two legs of a right triangle, 
    calculate the hypotenuse.
*/

    float A, B, hypotenuse;
    
    printf("Input the value of leg A: ");
    scanf("%f", &A);
    printf("Input the value of leg B: ");
    scanf("%f", &B);
    
    hypotenuse = sqrt((A * A) + (B * B));
    
    printf("The hypotenuse of the triangle is: %.2f.\n", hypotenuse);

    return 0;
}