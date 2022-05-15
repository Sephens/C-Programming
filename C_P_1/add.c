#include <stdio.h>
int number1, number2, sum;
int main(void)
{
	int number1, number2, sum;
	printf(" Enter two integers ");
	scanf("%d %d", &number1, &number2);
	sum = number1 + number2;
	printf("%d + %d is equal to: %d", number1, number2,sum);
	return 0;
}
