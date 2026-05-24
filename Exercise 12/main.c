#include <stdio.h>

int main()
{
    float V, R, I, P, E;
    int t, d, b[32];
    char option;

    printf("=====================================\n");
    printf("   Electronics Calculator V:1.01    \n");
    printf("Choose an option to calculate:\n");
    printf("=====================================\n\n");

    printf("V - Voltage\n");
    printf("I - Current\n");
    printf("R - Resistance\n");
    printf("P - Power\n");
    printf("E - Energy\n");
    printf("C - Decimal to Binary\n\n");

    printf("Option: ");
    scanf(" %c", &option);

    printf("\n=====================================\n\n");

    if (option == 'V' || option == 'v') {

        printf("Enter the current and resistance:\n\n");

        printf("I = ");
        scanf("%f", &I);

        printf("R = ");
        scanf("%f", &R);

        V = R * I;

        printf("\nVoltage: %.2f V\n", V);
    }

    else if (option == 'I' || option == 'i') {

        printf("Enter the voltage and resistance:\n\n");

        printf("V = ");
        scanf("%f", &V);

        printf("R = ");
        scanf("%f", &R);

        I = V / R;

        printf("\nCurrent: %.2f A\n", I);
    }

    else if (option == 'R' || option == 'r') {

        printf("Enter the voltage and current:\n\n");

        printf("V = ");
        scanf("%f", &V);

        printf("I = ");
        scanf("%f", &I);

        R = V / I;

        printf("\nResistance: %.2f Ohm\n", R);
    }

    else if (option == 'P' || option == 'p') {

        printf("Enter the voltage and current:\n\n");

        printf("V = ");
        scanf("%f", &V);

        printf("I = ");
        scanf("%f", &I);

        P = V * I;

        printf("\nPower: %.2f W\n", P);
    }

    else if (option == 'E' || option == 'e') {

        printf("Enter the power and elapsed time:\n\n");

        printf("P = ");
        scanf("%f", &P);

        printf("t = ");
        scanf("%d", &t);

        E = P * t;

        printf("\nEnergy: %.2f J\n", E);
    }

    else if (option == 'C' || option == 'c') {

        printf("Enter the number to convert:\n\n");

        printf("Decimal: ");
        scanf("%d", &d);

        if (d == 0) {
            printf("Binary: 0\n");
        }

        else {

            int i = 0;

            while (d > 0) {
                b[i] = d % 2;
                d = d / 2;
                i++;
            }

            printf("Binary: ");

            for (int j = i - 1; j >= 0; j--) {
                printf("%d", b[j]);
            }

            printf("\n");
        }
    }

    else {
        printf("Invalid option\n");
    }

    return 0;
}