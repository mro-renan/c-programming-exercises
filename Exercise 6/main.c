#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    
/*  Student: Mariano Renan da Silva 
    Exercise 6: Given the ratio of an AP and its first
    term, calculate the 20th term.
*/

    float ratio, first_term, n_term;
    int n;
    
    printf("Input the ratio of the AP: ");
    scanf("%f", &ratio);
    printf("Input the first term of the AP: ");
    scanf("%f", &first_term);
    printf("Input the desired term: ");
    scanf("%d", &n);
    
    n_term = first_term + (n - 1) * ratio;
    
    printf("The %dth term of the AP is: %.2f.\n", n, n_term);

    return 0;
}