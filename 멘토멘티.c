#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	
	double x, y, s;

	printf("�ﰢ���� �غ�: ");
	scanf("%lf", &x);

	printf("�ﰢ���� ����: ");
	scanf("%lf", &y);

	s = x * y / 2;

	printf("�ﰢ���� ����: %.2lf", s);


	return 0;
}