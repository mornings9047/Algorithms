/* No.2447 ������� ������ ����Լ��� ��� ���� 1 */
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
	
}
