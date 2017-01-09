#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"사칙연산.h"


#define MAX 10

int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);
void main() {
	/*
	puts("저는..");
	int age;
	puts("나이입력:");
	scanf("%d", &age);
	printf("내 나이는 %d입니다", age);

}*/

/* 영어 대소문자 구별
char ch;
scanf("%c", &ch);
if (ch>='a'&&ch<='z') {
	printf("Lower case");

}
else if (ch>='A' && ch<='Z') {
	printf("upper case");
}
else {
	printf("No good");
}*/

/* 두수 같은지 구별
int a, b;
scanf("%d %d", &a, &b);
if (a == b) {
	puts("same");
}
else {
	puts("different");
}*/

/*
float a, b;
puts("두 수를 입력하세요");
scanf("%f%f", &a, &b); // double 일경우 %lf
float sum = a + b;
float avg = sum / 2;
printf("sum = %f, avg=%f\n", sum, avg);


double a, b;
puts("두 수를 입력하세요");
scanf("%lf%lf", &a, &b); // double 일경우 %lf
double sum = a + b;
double avg = sum / 2;
printf("sum = %6.2lf, avg=%3.1lf\n", sum, avg);
*/

/* 계속 더하는
int a, b;
int sum = 0;
while (1) {
	puts("숫자를 입력하세요 :");
	scanf("%d %d", &a, &b);
	if (a == 0 || b == 0) {
		break;
	}
	sum = sum+ (a + b);
	printf("sum = %d\n", sum);

}*/

/* 구구단
int result;
for (int i = 1; i < 10; i++) {
	for (int j = 1; j < 10; j++) {
		result = i*j;
		printf("%d * %d = %2d\t", i, j, result);
	}printf("\n");
}*/

/*별찍기
for (int i = 1; i < 6; i++) {
	for (int j = 1; j < i + 1; j++) {
		if (i == j) {
			printf("@");
		}
		else {
			printf("*");
		}
	}printf("\n");
}

for (int i = 1; i < 6; i++) {
	for (int j = 1; j < i + 1; j++) {
		printf("%d", j);
	}printf("\n");
}


for (int i = 1; i < 6; i++) {
	for (int j = 1; j <6; j++) {
		if ((i+j)==6) {
			printf("*");
		}
		else {
			printf(" ");
		}

	}printf("\n");
}

int i;
for (int i = 5; 1 <= i; i--) {
	for (int j = 1; j < i; j++) {
		printf(" ");
	}printf("*");
	printf("\n");
}
*/


/* switch
puts("점심메뉴선택");
puts("************");
puts("1. 짜장면");
puts("2. 김치찌개");
puts("3. 라면");

int choice;
scanf("%d", &choice);
printf("선택한 메뉴는 ");

switch (choice)
{
case 1:
	puts("짜장면 값: 4000원");
	break;
case 2:
	puts("김치찌개 값: 2000원");
	break;
case 3:
	puts("라면 값: 1000원");
	break;
default:
	puts("다시입력");
	break;
}
*/



/* 주민번호 판별
char jumin[15];
scanf("%s", jumin);
char gender = jumin[7];
if (gender == '1') {
	puts("2000전 남자");
}
else if (gender == '2') {
	puts("2000전 여자");
}
else if (gender == '3') {
	puts("2000후 남자");
}else if(gender == '4'){
	puts("2000후 여자");
}
else {
	puts("올바르지 않다!");

}// 이거나 또는

switch (gender)
{
	//char 이기때문에 '' 꼭 써줘야함
case '1':
	puts("2000전 남자");
	break;
case '2':
	puts("2000전 여자");
	break;
case '3':
	puts("2000후 남자");
	break;
case '4':
	puts("2000후 여자");
	break;
default:
	puts("올바르지 않다!");
	break;
}*/

/* 더하기
int array[5];
int sum=0;
for (int i = 0; i < 5; i++) {
	scanf("%d",&array[i]);
	sum +=  array[i];
}
printf("%d", sum);
*/

/*
puts("두 수를 입력 : ");
int i, j;
scanf("%d %d", &i, &j);
int result = add(i, j);
printf("add = %d \n", result);

result = sub(i, j);
printf("sub = %d \n", result);

result = mul(i, j);
printf("mul = %d \n", result);

result = div(i, j);
printf("div = %d \n", result);
*/



/* exclusive or
printf("%d ", 7 ^ 9);
*/

/*
int i = 0;
while (i++ <= MAX) {
	if (i % 3 == 0)printf("hi ");
	else if (i % 3 == 1) printf("ho ");
	else if (i % 3 == 2) printf("hu ");
	else printf("End");
}
putchar('!');
putchar('\n');
*/

	/*
	int count=0;
	
	for (int r = 0; r <=100 ; ) {
		r += 5;
		r -= (r <= 50 ? 1 : 2);
		count++;
		printf("%d 회 달팽이 이동 : %d \n", count, r);
	}
	printf("달팽이 총 이동횟수 : %d \n", count);
	*/

	
	/*배열
	int student[3][6] = { {1,50,80,60},{2,60,75,90},{3,91,54,89} };
	 
	//총점 평균 계산
	for (int i = 0; i < 3; i++) {
		student[i][4] = (student[i][1]+ student[i][2] + student[i][3]  );
		student[i][5] = student[i][4] / 3;
	}
	
	printf("번호\t국어\t영어\t수학\t총계\t평균\n");
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 6; j++) {
				printf("%d\t", student[i][j]);
			}printf("\n");
	}*/



	//선택정렬
	int  seleted[5];
	for (int i = 0; i < 5; i++) {
		for(int j =0; j<2)
	}

	//버블정렬


	}
