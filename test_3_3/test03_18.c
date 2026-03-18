#define _CRT_SECURE_NO_WORINGS 1
#include<stdio.h>
#include<stdlib.h>

union U {
	char c;
	int i;
};

// Ã¶¾Ù
enum Sex {
	MALE,
	FEMALE,
	SECRET
};

enum Weekday {
	mon,
	tue,
	wed,
	thur,
	fri,
	sat,
	sun
};
int main() {
	union U u;
	printf("sizeof(u) = %d\n", sizeof(u));
	printf("%p\n", &u);
	printf("%p\n", &u.c);
	printf("%p\n", &u.i);

	u.c = 'w';
	u.i = 100;
	printf("u.c = %c\n", u.c);

	enum Sex s = MALE;
	enum Sex s2 = FEMALE;


	return 0;
}