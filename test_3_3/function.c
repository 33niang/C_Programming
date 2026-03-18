#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include"add.h"

void move(char src, char dest) {
	printf("从%c移动到%c\n", src, dest);
}

// 递归解决汉诺塔问题
void hanoi(int n, char one, char two, char three,int* num) {
	if (n==1) {
		move(one, three);
		*num += 1;
	}
	else {
		// 把one上的n-1个盘子借助three移动到two上
		hanoi(n - 1, one, three, two,num);
		//把one上的第n个盘子移动到three上
		move(one, three);
		*num += 1;
		//把two上的n-1个盘子借助one移动到three上
		hanoi(n - 1, two, one, three,num);
	}
}
int main() {
	
	int n = 0;
	int num = 0;
	printf("请输入盘子的个数: ");
	scanf("%d", &n);
	hanoi(n, 'A', 'B', 'C',&num);
	printf("次数:%d", num);
	return 0;
}
