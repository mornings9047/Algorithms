/* No.1018 체스판을 만드는 모든 경우를 시도하여 최적의 방법을 찾는 문제 */
#include <stdio.h>
#include <stdlib.h>

int chess(int **);

int main() {
	int row, col;
	scanf("%d %d", &row, &col);
	int ** arr = (int **) malloc(sizeof(int *) * row);

	for (int i = 0; i < row; i++)
		arr[i] = (int *)malloc(sizeof(int) * col);

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			scanf("%c", &arr[i][j]);
		}
	}

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			printf("%c", arr[i][j]);
		}
		printf("\n");
	}

	printf("%d \n", chess(arr));
	return 0;
}

int chess(int ** arr) {
	int cnt = 0;

	return cnt;
}
