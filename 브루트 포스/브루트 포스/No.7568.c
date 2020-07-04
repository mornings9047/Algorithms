/* No.7568 모든 사람을 비교하여 덩치 등수를 구하는 문제 */
#include <stdio.h>
#include <stdlib.h>

void rank(int ** arr,  int);

int main() {
	int cnt, weight, height;

	scanf("%d", &cnt);
	int ** arr = (int **) malloc(sizeof(int *) * cnt);
	for (int i = 0; i < cnt; i++)
		arr[i] = (int *) malloc(sizeof(int) * 2);

	for (int i = 0; i < cnt; i++) {
		scanf("%d %d", &weight, &height);
		*(*(arr+i)+0) = weight;
		*(*(arr+i)+1) = height;
	}

	rank(arr, cnt);

	return 0;
}

void rank(int ** arr, int cnt) {
	int * result = (int * ) malloc(sizeof(int) * cnt);
	for (int i = 0; i < cnt; i++) {
		int r = cnt;
		for (int j = 0; j < cnt; j++) {
			if (i == j)
				continue;
			if (*(*(arr+i)+0) >= *(*(arr+j)+0) || *(*(arr+i)+1) >= *(*(arr+j)+1))
				r--;
		}
		result[i] = r;
	}

	for (int i = 0; i < cnt; i++)
		printf("%d ", result[i]);
	printf("\n");
}
