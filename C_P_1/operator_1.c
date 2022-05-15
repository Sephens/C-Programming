#include <stdio.h>
int main(void)
{
	int a = 10;
	int b = 20;
	char name [20] = "Steve";

	if(a != b || b == 20){
		printf("One of the condtions is true\n");
	}
	if(a == 10 && b == 20){
		printf("Both conditions are true\n");
	}

	if(a + b == 30){
		printf("%s is not that old\n", name);

	}
	if(a && b  < 23){
		printf("Yes, %s age is less than 23", name);
	}

	return 0;

}
