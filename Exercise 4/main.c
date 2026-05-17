#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    
/*  Student: Mariano Renan da Silva 
    Exercise 4: Given the three sides of a parallelepiped,
    calculate the perimeter, area, volume and diagonal.
*/

    float width, depth, height, perimeter, area, volume, diagonal;
    printf("Input the width of the parallelepiped: ");
    scanf("%f", &width);
    printf("Input the depth of the parallelepiped: ");
    scanf("%f", &depth);
    printf("Input the height of the parallelepiped: ");
    scanf("%f", &height);
    
    perimeter = 4 * (width + depth + height);
    area = 2 * (width * depth + height * depth + width * height);
    volume = width * depth * height;
    diagonal = sqrt(pow(width, 2) + pow(depth, 2) + pow(height, 2));
    
    printf("The perimeter of the parallelepiped is: %.2f.\n", perimeter);
    printf("The area of the parallelepiped is: %.2f.\n", area);
    printf("The volume of the parallelepiped is: %.2f.\n", volume);
    printf("The diagonal of the parallelepiped is: %.2f.\n", diagonal);

    return 0;
}