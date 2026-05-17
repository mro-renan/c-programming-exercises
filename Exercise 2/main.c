#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    
/*  Student: Mariano Renan da Silva 
    Exercise 2: Given the side of a square, 
    calculate the perimeter, area and diagonal.
*/

    float side, perimeter, area, diagonal;
    printf("Input the side of the square: ");
    scanf("%f", &side);

    perimeter = 4 * side;
    area = pow(side, 2);
    diagonal = side * sqrt(2);

    printf("The perimeter of the square is: %.2f\n", perimeter);
    printf("The area of the square is: %.2f\n", area);
    printf("The diagonal of the square is: %.2f\n", diagonal);

    return 0; 
}