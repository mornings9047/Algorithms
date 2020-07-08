/* No.2751 시간 복잡도가 O(nlogn)인 정렬 알고리즘으로 풀 수 있습니다. 예를 들면 병합 정렬, 힙 정렬 등이 있지만, 어려운 알고리즘이므로 지금은 언어에 내장된 정렬 함수를 쓰는 것을 추천드립니다.  */
#include <stdio.h>
#include <stdlib.h>

void mergeSort(int *, int, int);
void merge(int *, int, int, int);
int * sorted;

int main() {
	int cnt, num;
	int * arr;

	scanf("%d", &cnt);
	arr = (int *)malloc(sizeof(int) * cnt);
	sorted = (int *)malloc(sizeof(int) * cnt);
	for (int i = 0; i < cnt; i++)
		scanf("%d", &arr[i]);
	mergeSort(arr, 0, cnt - 1);
	for (int i = 0; i < cnt; i++)
		printf("%d \n", arr[i]);
	return 0;
}

void mergeSort(int * arr, int start, int end) {
	if (start < end) {
		int mid = (start + end) / 2;
		mergeSort(arr, start, mid);
		mergeSort(arr, mid + 1, end);
		merge(arr, start, mid, end);
	}
}

void merge(int * arr, int start, int mid, int end) {
	int i = start;
	int j = mid + 1;
	int index = start;
	while (i <= mid && j <= end)
		sorted[index++] = arr[i] <= arr[j] ? arr[i++] : arr[j++];
	if (i == mid + 1)
		for (int t = j; t <= end; t++)
			sorted[index++] = arr[t];
	else
		for (int t = i; t <= mid; t++)
			sorted[index++] = arr[t];
	for (int t = start; t <= end; t++)
		arr[t] = sorted[t];
}
