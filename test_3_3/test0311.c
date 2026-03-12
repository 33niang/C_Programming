#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>


int main() {
	int arr[10] = { 10,9,8,7,6,5,4,3,2,1 };
	int arr2[10];
	int i = 0;
	int j = 0;
	int temp;
	for (i = 0; i < 9; i++) {
		for (j = 0; j < 9 - i; j++) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	for (i = 0; i < 10; i++)
		printf("%d ", arr[i]);

	printf("\n");

	int a[2][3] = { 1, 2, 3, 4, 5, 6 };
	int b[3][2] = { 0 };
	i = 0;
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 3; j++)
			b[j][i] = a[i][j];
	}

	for (i = 0; i < 6; i++)
		printf("%d ", b[0][i]);

	printf("\n");

	char ch1[] = { 'a','b','c','d','e','\0'};
	ch1[2] = 'w';

	for (i = 0; i < 5; i++)
		printf("%c ", ch1[i]);
	printf("\n");
	char ch2[] = "abcde";
	printf("----------------\n");
	printf("%s\n", ch1);
	printf("%s\n", ch2);

	printf("\n");

	printf("%d\n",strlen(ch1));
	printf("%d\n", sizeof(ch1));

	char ch3[] = {'a','b','c','d','e'};
	i = 0;
	printf("stelen ch3 = %d\n", strlen(ch3));

	// gets() //可以读取spaces，但是不安全，容易导致缓冲区溢出，建议使用fgets()代替
	puts(ch1);

	char arr3[20] = "hello ";
	char arr4[] = "world";
	strcat(arr3, arr4);
	puts(arr3);

	_strupr(arr3);
	printf("%s\n", arr3);

	
	return 0;
}

