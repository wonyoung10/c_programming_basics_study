#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int first, second;
	char op;
	printf("첫 번째 수 입력 : ");
	scanf("%d", &first);
	printf("두 번째 수 입력 : ");
	scanf("%d", &second);
	printf("+,-,*,/,%% 중 선택 : ");
	scanf(" %c", &op);

	if (op == '+') {
		printf("%d %c %d = %d\n", first, op, second, first + second);
	}
	if (op == '-') {
		printf("%d %c %d = %d\n", first, op, second, first - second);
	}
	if (op == '*') {
		printf("%d %c %d = %d\n", first, op, second, first * second);
	}
	if (op == '/') { // 몫
		if (second != 0) {
			printf("%d %c %d = %d\n", first, op, second, first / second);
		}
		else printf("두 번째 수가 0이어서 계산 불가\n");
		
	}
	if (op == '%') { // 나머지 
		if(second != 0 )printf("%d %c %d = %d\n", first, op, second, first % second);
		else printf("두 번째 수가 0이어서 계산 불가\n");
	}

	if (first == second) printf("두 수가 같다");
	if (first > second) printf("첫 번째 수가 크다");
	if (first < second)printf("두 번째 수가 크다");
	
}
