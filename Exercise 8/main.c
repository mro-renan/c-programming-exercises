#include <stdio.h>
#include <stdlib.h>

int main() {

	/*  Student: Mariano Renan da Silva
	    Exercise 8: Given a time, calculate how many minutes
	    and seconds have passed since the beginning of the day.
	*/

	int horas, minute, passed_minute, passed_seconds;

	printf("Input the current time (hh:mm): ");
	scanf("%d:%d", &horas, &minute);

	passed_minute = horas * 60 + minute;
	passed_seconds = horas * 3600 + minute * 60;

	printf("Since the beginning of the day, %d minutes have passed.\n", passed_minute);
	printf("In seconds, that would be %d seconds.\n", passed_seconds);

	return 0;
}