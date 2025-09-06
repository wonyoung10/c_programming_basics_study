#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int answer,w, h,r,w2;
	float area;
	printf("<1>사각형 <2>삼각형 <3>원 <4>사다리꼴 : ");
	scanf("%d", &answer);

	if (answer == 1) {
		printf("가로 길이 입력 : ");
		scanf("%d",&w);
		printf("세로(높이) 길이 입력 : ");
		scanf("%d", &h);
		area = w * h;
		printf(" 가로 길이 %d 세로(높이) 길이 %d 인 사각형의 면적 %.3f\n", w, h, area);
	}
	if (answer == 2) {
		printf("밑변 길이 입력 : ");
		scanf("%d", &w);
		printf("높이 길이 입력 : ");
		scanf("%d", &h);
		area = w * h / 2;
		printf(" 밑변 길이 %d 높이 길이 %d 인 삼각형의 면적 %.3f\n", w, h, area);
	}
	if (answer == 3) {
		printf("반지름 길이 입력 : ");
		scanf("%d",&r);
		area = r * r * 3.14;
		printf("반지름 길이 %d 인 원의 면적 %0.3f\n", r, area);
	}
	if (answer == 4) {
		printf("윗변 길이 입력 : ");
		scanf("%d", &w);
		printf("아랫변 길이 입력 : ");
		scanf("%d", &w2);
		printf("높이 길이 입력 : ");
		scanf("%d", &h);
		area = (w + w2) * h * 0.5;
		printf("윗변 길이 %d 아랫변 길이 %d 높이 길이 %d 인 사다리꼴의 면적 %.3f\n", w, w2, h, area);
	}
}
