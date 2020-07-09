/* No.2108 정렬을 활용하는 문제 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void statistics(int *, int);
int average(int *, int);
int center(int *, int);
int freq(int *, int);
int range(int *, int);
void mergeSort(int *, int, int);
void merge(int *, int, int, int);
int * sorted;

int main() {
	int cnt;
	int * arr;

	scanf("%d", &cnt);
	arr = (int *)malloc(sizeof(int) * cnt);
	for (int i = 0; i < cnt; i++)
		scanf("%d", &arr[i]);
	statistics(arr, cnt);

	return 0;
}

void statistics(int * arr, int cnt) {
	printf("%d \n", average(arr, cnt));
	printf("%d \n", center(arr, cnt));
	printf("%d \n", freq(arr, cnt));
	printf("%d \n", range(arr, cnt));
}

int average(int * arr, int cnt) {
	int sum = 0;
	for (int i = 0; i < cnt; i++)
		sum += arr[i];
	return floor((double)sum / cnt + 0.5);
}

int center(int * arr, int cnt) {
	if (cnt == 1)
		return arr[0];
	sorted = (int *)malloc(sizeof(int) * cnt);
	for (int i = 0; i < cnt; i++)
		sorted[i] = 0;
	mergeSort(arr, 0, cnt - 1);
	return arr[cnt / 2];
}

int freq(int * arr, int cnt) {
	if (cnt == 1)
		return arr[0];
	int max = -1;
	int index = -1;
	int index2 = -1;
	int count[8001] = { 0 };
	for (int i = 0; i < cnt; i++)
		count[arr[i] + 4000]++;

	for (int i = 0; i < 8001; i++) {
		if (max < count[i]) {
			max = count[i];
			index = i;
			index2 = -1;
		}
		else if (max == count[i]) {
			if (index2 == -1)
				index = index2 = i;
		}
	}

	return (index2 == -1 ? index : index2) - 4000;
}

int range(int * arr, int cnt) {
	int min = 4000, max = -4000;
	for (int i = 0; i < cnt; i++) {
		max = arr[i] > max ? arr[i] : max;
		min = arr[i] < min ? arr[i] : min;
	}
	return max - min;
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
	for (int i = start; i <= end; i++)
		arr[i] = sorted[i];
}
