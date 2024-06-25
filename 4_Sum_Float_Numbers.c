#include <stdio.h>

int main() {
	double FisrtNumber, SecondNumber, product;
	printf("Enter two numbers: ");
	scanf("%lf %lf", &FisrtNumber, &SecondNumber);
	product = FisrtNumber * SecondNumber;
	printf("Result is: %.2lf\n", product);
	return 0;
}