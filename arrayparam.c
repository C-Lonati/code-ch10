// file: arraypram.c
#include <stdio.h>

//int sumaryf(int ary[], int SIZE);
int sumary(int* ary, int SIZE);

int main(void) {
	int point[] = { 95,88,76,54,85,33,65,78,99,82 };
	int* adress = point;
	int aryLength = sizeof(point) / sizeof(int);

	int sum = 0;
	for (int i = 0; i < aryLength; i++)
		sum += *(point + i);
	//sum += *(point++);  //�����߻�
	//sum += *(adress++);  //����

	printf("���ο��� ���� ���� %d\n", sum);
	adress = point;
	printf("�Լ� sumary() ȣ��� ���� ���� %d\n", sumary(point, aryLength));
	printf("�Լ� sumary() ȣ��� ���� ���� %d\n", sumary(&point[0], aryLength));
	printf("�Լ� sumary() ȣ��� ���� ���� %d\n", sumary(adress, aryLength));

	return 0;
}

//int sumary(int ary[], int SIZE)�� ����
int sumary(int* ary, int SIZE) {
	int sum = 0;
	for (int i = 0; i < SIZE; i++) {
		//sum+= ary[i] //����
		//sum+= *(ary +i); //����
		sum += *ary++;;
		//sum+= *(ary++); //����
	}

	return sum;
}