#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	
	double x, y, s;

	printf("삼각형의 밑변: ");
	scanf("%lf", &x);

	printf("삼각형의 높이: ");
	scanf("%lf", &y);

	s = x * y / 2;

	printf("삼각형의 넓이: %.2lf", s);


	return 0;
}