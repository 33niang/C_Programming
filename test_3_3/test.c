#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdbool.h>
#include"add.h"

#define MAX 1000
int jiecheng(int n) {
	if (n == 0 || n == 1)
		return 1;
	return n * jiecheng(n - 1);
}
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

	printf("----------------------\n");

	printf("%d\n", jiecheng(5));

	int t = 1;
	int i = 2;

	while (i <= 5) {
		t = t * i;
		i++;
	}

	double f = 100.0;
	double c = 0.0;

	printf("请输入华氏温度：");
	// scanf("%lf", &f); //%lf表示输入一个双精度浮点数

	c = (f - 32) * 5.0 / 9.0;
	printf("对应的摄氏温度是：%.2lf\n", c); //%.2lf表示输出一个双精度浮点数，保留两位小数
	
	// 存款
	float p0 = 0;
	// r1活期,r2定期, r3半年定期
	float r1 = 0.0036, r2 = 0.0225, r3 = 0.0198;
	float p1 = 0.0, p2 = 0.0, p3 = 0.0;
	p0 = 1000.0;
	p1 = p0*(1 + r1);
	p2 = p0 * (1 + r2);
	p3 = p0 * (1 + r3 / 2) * (1 + r3 / 2);

	printf("活期存款一年后的金额：%.2f\n", p1);
	printf("定期存款一年后的金额：%.2f\n", p2);
	printf("半年定期存款一年后的金额：%.2f\n", p3);

	double d = 12.34e3;

	printf("%lf\n", d);

	char ch = 'A';

	printf("hehe\n");

	char ch2 = '\'';

	printf("%c\n", ch2);

	printf("%s\n", "abc");

	printf("%s\n", "\"");

	printf("(are you ok\?\?)\n");

	printf("\a\a\a\a\n"); // \a表示发出警告声

	printf("%c\n", '\32'); // \32表示一个八进制数，等价于十进制的26，对应ASCII码表中的SUB字符

	printf("%c\n", '\x32'); // \x32表示一个十六进制数，等价于十进制的50，对应ASCII码表中的字符2

	printf("%d\n",MAX);

	int age = 10;
	printf("%d\n", age);
	age += 1;
	printf("%d\n", age);

	const int num = 10;
	
	printf("%d\n", sizeof(char));
	printf("%d\n", sizeof(short));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(long));
	printf("%d\n", sizeof(float));
	printf("%d\n", sizeof(double));

	printf("%d\n", strlen("bit"));

	unsigned int u = -10;
	printf("%d\n", u); // %d表示以有符号整数的形式输出u，结果是-10
	printf("%u\n", u); // %u表示以无符号整数的形式输出u，结果是4294967286（因为unsigned int的范围是0到4294967295，所以-10对应的无符号整数是4294967286）

	float f1 = 3.14f;
	double f2 = 3.14;
	printf("%d\n", sizeof(f1)); // 输出4，float类型占4字节
	printf("%d\n", sizeof(f2)); // 输出8，double类型占8字节

	printf("%d\n",Add(10, 20));

	printf("%5.3f\n", 3.14e5); // %5.3f表示输出一个浮点数，至少占5个字符宽度，小数部分保留3位，结果是314000.000

	printf("%e\n", 314.159);

	// 选择结构

	double a1 = 0.0, b1 = 0.0, c1 = 0.0;
	double x1 = 0.0, x2 = 0.0;
	// scanf("%lf %lf %lf", &a1, &b1, &c1);
	double delta = b1 * b1 - 4 * a1 * c1;
	if (delta >= 0) {
		x1 = (-b1 + sqrt(delta)) / (2 * a1);
		x2 = (-b1 - sqrt(delta)) / (2 * a1);
		printf("有实根,x1=%.2lf,x2=%.2lf\n",x1,x2);
	}
	else {
		printf("无实根\n");
	}

	_Bool flag = true; // _Bool是C99引入的布尔类型，flag是一个布尔变量，值为1表示真，0表示假
	printf("bool is %d\n", flag); // 输出1，表示flag的值为真

	int day = 8;
	// scanf("%d", &day);
	switch (day) {
	case 1:
		printf("1\n");
		break;
	case 2:
		printf("2\n");
		break;
	case 3:
		printf("3\n");
		break;
	case 4:
		printf("4\n");
		break;
	case 5:
		printf("5\n");
		break;
	case 6:
		printf("6\n");
		break;
	case 7:
		printf("7\n");
		break;
	default:
		printf("error\n");
	}

	i = 0;
	int sum1 = 0;
	do {
		sum1 += i;
		i++;
	} while (i <= 100);

	printf("%d\n", sum1);

	i = 0;
	int j = 0;
	for (i = 1; i <= 4; i++) {
		for(j = 1; j <= 5; j++) {
			printf("%d\t", i * j);
		}
		printf("\n");
	}

	// 求π
	double sum2 = 0.0;
	double pi = 0.0;
	i = 1;
	int flag1 = 1;
	while (1) {
		if (fabs(flag * (1.0 / i)) < 1e-6)
			break;
		sum2 += flag1 * (1.0 / i);
		i += 2;
		flag1 = -flag1;
	}
	printf("%f\n", sum2 * 4);
	
	return 0;
}

