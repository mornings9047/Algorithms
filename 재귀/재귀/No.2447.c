/* No.2447 재귀적인 패턴을 재귀함수로 찍는 문제 1 */
#include <stdio.h>

void printStar(int, int, int);

int main() {
	int num;
	scanf("%d", &num);
	for (int i = 0; i < num; i++) {
		for (int j = 0; j < num; j++)
			printStar(i, j, num);
		printf("\n");
	}
	return 0;
}

void printStar(int row, int col, int num) {
	if (row / num % 3 == 1 && col / num % 3 == 1)
		printf(" ");
	else {
		if (num / 3 == 0)
			printf("*");
		else
			printStar(row, col, num / 3);
	}
}
