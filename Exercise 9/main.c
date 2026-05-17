#include <stdio.h>
#include <stdlib.h>

int main() {

	/*  Student: Mariano Renan da Silva
	    Exercise 9: Given the value of the minimum wage and a certain
	    salary, calculate how many minimum wages are contained in it.
	*/
	
	float minimun_wage, wage, qnt_minimum_wages;
	
	printf("Input the minimum wage in force ($): ");
	scanf("%f", &minimun_wage);
	printf("Input the salary being analyzed ($): ");
	scanf("%f", &wage);
	
	qnt_minimum_wages = wage / minimun_wage;
	
	printf("For a salary of $%.2f, there are %.2f minimum wages contained in it.\n", wage, qnt_minimum_wages);
	
	return 0;
}	