#include <stdio.h>
int number1, number2, sum;
int main(void)
{
	int number1, number2, sum;
	printf(" Enter the first integer:  ");
	scanf("%d", &number1);
	printf("Enter the second interger: ");
	scanf("%d", &number2);
	sum = number1 + number2;
	printf("%d + %d =  %d", number1, number2,sum);
	return 0;
}
