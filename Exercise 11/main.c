#include <stdio.h>
#include <string.h>

int main()
{
    float a, b, c;
    char condition[20], triangle_type[20];

    printf("Enter side A of the triangle: ");
    scanf("%f", &a);

    printf("Enter side B of the triangle: ");
    scanf("%f", &b);

    printf("Enter side C of the triangle: ");
    scanf("%f", &c);

    printf("\n\nTriangle analysis:\n\n");

    if (a < b + c && b < a + c && c < a + b) {

        strcpy(condition, "exists");

        if (a == b && b == c) {
            strcpy(triangle_type, "Equilateral");

        } else if (a == b || a == c || b == c) {
            strcpy(triangle_type, "Isosceles");

        } else {
            strcpy(triangle_type, "Scalene");
        }

        printf("The triangle exists and is %s.\n", triangle_type);

    } else {

        strcpy(condition, "does not exist");

        printf("The triangle %s.\n", condition);
    }

    return 0;
}