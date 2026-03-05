#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


int main() {
	
	/*
	
	printf("hello_world\n");
	printf("hello_world\n");
	printf("hello_world\n");
	printf("hello_world\n");
	printf("hello_world\n");
	printf("hello_world\n");
	printf("hello_world\n");
	printf("hello_world\n");
	
	*/

	int num1 = 10;
	int num2 = 20;
	int sum = num1 + num2;
	printf("The sum of %d and %d is %d\n", num1, num2, sum);

	if(num1>num2)
		printf("num1 is greater than num2\n");
	else
		printf("num1 is not greater than num2\n");

	int a = 3;
	int b = 6;
	// scanf("%d,%d", &a, &b);
	printf("a=%d,b=%d\n", a, b);


	int Max(int, int);
	int max = 0;
	max=Max(a, b);
	printf("%d\n", max);



	return 0;
}

