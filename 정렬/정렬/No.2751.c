/* No.2751 �ð� ���⵵�� O(nlogn)�� ���� �˰������� Ǯ �� �ֽ��ϴ�. ���� ��� ���� ����, �� ���� ���� ������, ����� �˰����̹Ƿ� ������ �� ����� ���� �Լ��� ���� ���� ��õ�帳�ϴ�.  */
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

