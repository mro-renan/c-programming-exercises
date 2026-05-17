#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

/*  Student: Mariano Renan da Silva 
    Exercise 1: Given the base and height of a rectangle, 
    calculate the perimeter, area and diagonal.
*/

    float base, height, perimeter, area, diagonal;
    printf("Input the base of the rectangle: ");
    scanf("%f", &base);
    printf("Input the height of the rectangle: ");
    scanf("%f", &height);
    area = base * height;
    perimeter = 2 * (base + height);
    diagonal = sqrt(pow(base, 2) + pow(height, 2));
    printf("Area of the rectangle: %.2f\n", area);
    printf("Perimeter of the rectangle: %.2f\n", perimeter);
    printf("Diagonal of the rectangle: %.2f\n", diagonal);

    return 0;
}