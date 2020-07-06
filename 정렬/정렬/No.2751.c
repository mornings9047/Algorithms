/* No.2751 시간 복잡도가 O(nlogn)인 정렬 알고리즘으로 풀 수 있습니다. 예를 들면 병합 정렬, 힙 정렬 등이 있지만, 어려운 알고리즘이므로 지금은 언어에 내장된 정렬 함수를 쓰는 것을 추천드립니다.  */
#include <stdio.h>

void mergeSort(int *, int, int, int);
int a[8] = { 27,10,12,20,25,13,15,22 };
int b[8] = { 0 };

int main() {
	/*int cnt, num;
	int * arr;
	scanf("%d", &cnt);
	arr = (int *)malloc(sizeof(int) * cnt);

	for (int i = 0; i < cnt; i++) {
		scanf("%d", arr[i]);
	}

	mergeSort(arr, 0, cnt / 2, cnt);

	return 0;*/
}

void mergeSort(int * arr, int left, int mid, int right) {
	int l1 = left;
	int l2 = mid + 1;

	for (int i = left; l1 <= mid && l2 <= l2; i++) {
		if (a[l1] <= a[l2])
			b[i] = a[l1++];
		else
			b[i] = a[l2++];
	}



}

