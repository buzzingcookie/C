#include <stdio.h>

int celsius2fahr(float celsius);
int fahr2celsius(float fahrenheit);


int main() {

    printf("%d", celsius2fahr(53));
    printf("\n");
    printf("%d", fahr2celsius(67));
}

int celsius2fahr(float celsius) {

    float fahrenheit, ci;
	int steps, limit, init;
	char fahr, cel;

	steps = 20;
	limit = 300;

	fahr = 'F';
	cel = 'C';	

	
	for(init = 0; init <= 300; init += steps){

        ci = celsius + init;
		
		fahrenheit = (ci * 9 / 5) + 32;	
		
		printf("%3.0f \t %6.1f\n", ci, fahrenheit);
	}

    return 0;
}

int fahr2celsius(float fahrenheit) {

    float celsius, fi;
	int steps, limit, init;
	char fahr, cel;

	steps = 20;
	limit = 300;

	fahr = 'F';
	cel = 'C';	

	
	for(init = 0; init <= 300; init += steps){

        fi = fahrenheit + init;
		
		celsius = 5 * (fi - 32) / 9;	
		
		printf("%3.0f \t %6.1f\n", fi, celsius);
	}

    return 0;
}