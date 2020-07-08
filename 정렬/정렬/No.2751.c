/* No.2751 �ð� ���⵵�� O(nlogn)�� ���� �˰������� Ǯ �� �ֽ��ϴ�. ���� ��� ���� ����, �� ���� ���� ������, ����� �˰����̹Ƿ� ������ �� ����� ���� �Լ��� ���� ���� ��õ�帳�ϴ�.  */
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
