#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>

int arr[4][4];
//产生随机数
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
		}//确保产生的数字不重叠
		
	}
	
}
//画格子
void draw() {
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			printf(" %d |", arr[i][j]);
		}
		printf("\n");
	}
}
//移动
void moveup() {
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			if (arr[i][j] != 0) {
										//后面还没写完（流泪）
			}
		}
	}
}

int main() {
	
	return 0;
}
