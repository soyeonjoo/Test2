#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"��Ģ����.h"


#define MAX 10

int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);
void main() {
	/*
	puts("����..");
	int age;
	puts("�����Է�:");
	scanf("%d", &age);
	printf("�� ���̴� %d�Դϴ�", age);

}*/

/* ���� ��ҹ��� ����
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

/* �μ� ������ ����
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
puts("�� ���� �Է��ϼ���");
scanf("%f%f", &a, &b); // double �ϰ�� %lf
float sum = a + b;
float avg = sum / 2;
printf("sum = %f, avg=%f\n", sum, avg);


double a, b;
puts("�� ���� �Է��ϼ���");
scanf("%lf%lf", &a, &b); // double �ϰ�� %lf
double sum = a + b;
double avg = sum / 2;
printf("sum = %6.2lf, avg=%3.1lf\n", sum, avg);
*/

/* ��� ���ϴ�
int a, b;
int sum = 0;
while (1) {
	puts("���ڸ� �Է��ϼ��� :");
	scanf("%d %d", &a, &b);
	if (a == 0 || b == 0) {
		break;
	}
	sum = sum+ (a + b);
	printf("sum = %d\n", sum);

}*/

/* ������
int result;
for (int i = 1; i < 10; i++) {
	for (int j = 1; j < 10; j++) {
		result = i*j;
		printf("%d * %d = %2d\t", i, j, result);
	}printf("\n");
}*/

/*�����
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
puts("���ɸ޴�����");
puts("************");
puts("1. ¥���");
puts("2. ��ġ�");
puts("3. ���");

int choice;
scanf("%d", &choice);
printf("������ �޴��� ");

switch (choice)
{
case 1:
	puts("¥��� ��: 4000��");
	break;
case 2:
	puts("��ġ� ��: 2000��");
	break;
case 3:
	puts("��� ��: 1000��");
	break;
default:
	puts("�ٽ��Է�");
	break;
}
*/



/* �ֹι�ȣ �Ǻ�
char jumin[15];
scanf("%s", jumin);
char gender = jumin[7];
if (gender == '1') {
	puts("2000�� ����");
}
else if (gender == '2') {
	puts("2000�� ����");
}
else if (gender == '3') {
	puts("2000�� ����");
}else if(gender == '4'){
	puts("2000�� ����");
}
else {
	puts("�ùٸ��� �ʴ�!");

}// �̰ų� �Ǵ�

switch (gender)
{
	//char �̱⶧���� '' �� �������
case '1':
	puts("2000�� ����");
	break;
case '2':
	puts("2000�� ����");
	break;
case '3':
	puts("2000�� ����");
	break;
case '4':
	puts("2000�� ����");
	break;
default:
	puts("�ùٸ��� �ʴ�!");
	break;
}*/

/* ���ϱ�
int array[5];
int sum=0;
for (int i = 0; i < 5; i++) {
	scanf("%d",&array[i]);
	sum +=  array[i];
}
printf("%d", sum);
*/

/*
puts("�� ���� �Է� : ");
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
		printf("%d ȸ ������ �̵� : %d \n", count, r);
	}
	printf("������ �� �̵�Ƚ�� : %d \n", count);
	*/

	
	/*�迭
	int student[3][6] = { {1,50,80,60},{2,60,75,90},{3,91,54,89} };
	 
	//���� ��� ���
	for (int i = 0; i < 3; i++) {
		student[i][4] = (student[i][1]+ student[i][2] + student[i][3]  );
		student[i][5] = student[i][4] / 3;
	}
	
	printf("��ȣ\t����\t����\t����\t�Ѱ�\t���\n");
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 6; j++) {
				printf("%d\t", student[i][j]);
			}printf("\n");
	}*/



	//��������
	int  seleted[5];
	for (int i = 0; i < 5; i++) {
		for(int j =0; j<2)
	}

	//��������


	}
