#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>


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







	return 0;
}

