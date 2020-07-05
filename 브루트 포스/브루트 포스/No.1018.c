/* No.1018 체스판을 만드는 모든 경우를 시도하여 최적의 방법을 찾는 문제 */
#include <stdio.h>
#include <stdlib.h>

int chess(char **, int, int);
int count(char **, int, int, char);
int check(char **, int, int, int, char);

int main() {
	int row, col;

	scanf("%d %d", &row, &col);
	char ** arr = (char **) malloc(sizeof(char *) * row);
	for (int i = 0; i < row; i++)
		arr[i] = (char *)malloc(sizeof(char) * col);

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++)
			scanf(" %c", &arr[i][j]);
	}

	printf("%d", chess(arr, row, col));
	return 0;
}

int chess(char ** arr, int row, int col) {
	int min = 32;
	for (int i = 0; i < row - 7; i++) {
		for (int j = 0; j < col - 7; j++) {
			int cnt = count(arr, i, j, arr[i][j]);
			min = min > cnt ? cnt : min;
		}
	}
	return min;
}

int count(char ** arr, int row, int col, char ch) {
	int cnt = 0;
	int s = (row + col) % 2;
		for (int i = row; i < row + 8; i++) {
		for (int j = col; j < col + 8; j++)
			cnt += check(arr, s, i, j, ch);
	}
	return cnt > 32 ? 64 - cnt : cnt;
}

int check(char ** arr, int s, int row, int col, char ch) {
	if ((row + col) % 2 == s) {
		if (arr[row][col] == ch)
			return 0;
	}
	else {
		if (arr[row][col] != ch)
			return 0;
	}
	return 1;
}
