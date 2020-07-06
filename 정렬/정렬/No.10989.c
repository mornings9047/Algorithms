/* No.10989 수의 범위가 작다면 카운팅 정렬을 사용하여 더욱 빠르게 정렬할 수 있습니다. */
#include <stdio.h>
#define max 10000

void countingSort(int *, int);

int main(){
	int cnt;
	int  arr[max] = { 0 };

	scanf("%d", &cnt);
	countingSort(arr, cnt);

	return 0;
}

void countingSort(int * arr, int cnt) {
	int num;
	for (int i = 0; i < cnt; i++) {
		scanf("%d", &num);
		arr[num - 1]++;
	}
	for (int i = 0; i < max; i++) {
		for (int j = 0; j < arr[i]; j++)
			printf("%d \n", i + 1);
	}
}
