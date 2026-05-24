
#include <stdio.h>
#include <string.h>

int main()
{
    float g1, g2, average;
    int attendance;
    char situation[20];

    printf("======================\n");
    printf("  Average Calculator  \n");
    printf("======================\n\n");

    printf("Input your first and second grades (0.0 - 10.0): \n\n");
    printf("Grade 1: ");
    scanf("%f", &g1);
    printf("Grade 2: ");
    scanf("%f", &g2);

    average = (g1 + g2)/2;

    printf("Average: %.2f", average);

    printf("\n\nInput your attendance (0 - 100)\n\n");
    printf("Attendance (%%): ");
    scanf("%d", &attendance);

    printf("==========================\n\n");

    if (attendance >= 75) {
        if (average >= 6) {
            strcpy(situation, "Passed");
        } else if (average >= 2) {
            strcpy(situation, "Final Exam");
        } else {
            strcpy(situation, "Failed by Grade");
        }
    } else {
        strcpy(situation, "Failed by Attendance");
    }

    printf("Situation: %s", situation);

    return 0;
}