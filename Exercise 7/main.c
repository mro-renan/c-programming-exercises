#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    
/*  Student: Mariano Renan da Silva 
    Exercise 7: Given the ratio of a GP and its first term,
    calculate the 9th term.
*/

    float ratio, first_term, n_term;
    int n;
    
    printf("Input the ratio of the GP: ");
    scanf("%f", &ratio);
    printf("Input the first term of the GP: ");
    scanf("%f", &first_term);
    printf("Input the desired term: ");
    scanf("%d", &n);
    
    n_term = first_term * pow(ratio, n - 1);
    
    printf("The %dth term of the GP is: %.2f.\n", n, n_term);

    return 0;
}