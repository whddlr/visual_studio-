#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	
	int year;
	int	max_value;

	printf("연도를 입력하시오: ");
	scanf("%d", &year);
	
	max_value = (year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0) ? printf("윤년"): printf("평년");
	
	
	return 0;
}