#include <stdio.h>

int main() {
	
	float celsius, fahrenheit;
	int steps, limit;
	char fahr, cel;

	steps = 20;
	limit = 300;

	fahr = 'F';
	cel = 'C';	

	printf("%3c \t %5c\n", fahr, cel);
	printf("-------------------\n");
	
	for(fahrenheit = 0; fahrenheit <= 300; fahrenheit += steps){
		
		celsius = 5 * (fahrenheit - 32) / 9;	
		
		printf("%3.0f \t %6.1f\n", fahrenheit, celsius);
	}
	

	printf("%3c \t %5c\n", cel, fahr);
	printf("-------------------\n");
	
	for(celsius = 0; celsius <= 300; celsius += steps){
		
		fahrenheit = 32 + (9 / 5 * celsius);	
		
		printf("%3.0f \t %6.1f\n", celsius, fahrenheit);
	}

	printf("Hello, world!\n");
}
