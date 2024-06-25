#include <stdio.h>

int main() {
	int FirstNumber, SecondNumber, sum;
	printf("Enter two integers: ");
	scanf("%d %d", &FirstNumber, &SecondNumber);
	sum = FirstNumber + SecondNumber;
	printf("Sum equal: %d", sum);
	return 0;
}