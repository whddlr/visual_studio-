#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	
	int year;
	int	max_value;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &year);
	
	max_value = (year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0) ? printf("����"): printf("���");
	
	
	return 0;
}