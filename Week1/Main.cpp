#include <stdio.h>


int main(void) {

	int a;
	int b;
	int c; 

	a = 10; 
	b = 20;
	
	printf("voer een geheel getal in.."); 
	scanf_s("%d", &b);

	c = a * b;

	if (b > 9) {

		printf("het ingevoerde getal was groter dan9");

	}

	printf("programmeren is %d leuk  %d  \n",a,  b);
	printf("A keer B is: %d", c);


	return 0;
} 



