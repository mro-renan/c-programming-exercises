#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    
/*  Student: Mariano Renan da Silva 
    Exercise 3: Given the radius of a circle, calculate
    the perimeter, area and diagonal.
*/

    float radius, perimeter, area, diagonal;
    float PI = 3.14;
    printf("Input the radius of the circle: ");
    scanf("%f", &radius);

    perimeter = 2 * PI * radius;
    area = PI * pow(radius, 2);
    diagonal = 2 * radius;

    printf("The perimeter of the circle is: %.2f\n", perimeter);
    printf("The area of the circle is: %.2f\n", area);
    printf("The diagonal of the circle is: %.2f\n", diagonal);

    return 0;
}