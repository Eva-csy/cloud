#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>

int arr[4][4];
//���������
int number() {
	srand(time(NULL));
	
	if (rand() % 10 == 0) {
		return 4;
	}
	else {
		return 2;
	}
}
void ram() {
	srand(time(NULL));
	for (int i = 0; i < 2;) {
		int r = rand() % 4;
		int c = rand() % 4;
		if (arr[r][c] == 0) {
			arr[r][c] = number();
			i++;
		}//ȷ�����������ֲ��ص�
		
	}
	
}
//������
void draw() {
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			printf(" %d |", arr[i][j]);
		}
		printf("\n");
	}
}
//�ƶ�
void moveup() {
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			if (arr[i][j] != 0) {
										//���滹ûд�꣨���ᣩ
			}
		}
	}
}

int main() {
	
	return 0;
}
