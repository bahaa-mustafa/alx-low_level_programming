#include <math.h>
#include <stdio.h>

int add(int a, int b) {return(a + b);}
int sub(int a, int b) {return(a - b);}
int mul(int a, int b) {return(a * b);}
int div(int a, int b) {
	if (b != 0)
		return(a / b);
	printf("Error: Divide by zero \n");
	return (0);}
int mod(int a, int b) {
	if (b != 0)
		return(a % b);
	printf("Error: Mod by zero \n");
	return (0);}
