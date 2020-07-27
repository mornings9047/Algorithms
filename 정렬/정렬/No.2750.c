/* No.2750 �ð� ���⵵�� O(n��)�� ���� �˰������� Ǯ �� �ֽ��ϴ�. ���� ��� ���� ����, ��ǰ ���� ���� �ֽ��ϴ�. */
#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int *, int);
void insertionSort(int *, int);

int main() {
	int cnt;
	scanf("%d", &cnt);
	int * arr = (int *)malloc(sizeof(int) * cnt);
	for (int i = 0; i < cnt; i++)
		scanf("%d", &arr[i]);

	//bubbleSort(arr, cnt);
	insertionSort(arr, cnt);

	for (int i = 0; i < cnt; i++)
		printf("%d \n", arr[i]);
	return 0;
}

void bubbleSort(int * arr, int cnt) {
	for (int i = 0; i < cnt - 1; i++) {
		for (int j = 0; j < cnt - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				int temp = *(arr + j);
				*(arr+j) = *(arr+j + 1);
				*(arr + j + 1) = temp;
			}
		}
	}
}

void insertionSort(int * arr, int cnt) {
	int i, j;
	for (i = 1; i < cnt; i++) {
		int temp = arr[i];
		for (j = i - 1; j >= 0 && arr[j]>temp; j--)
			arr[j + 1] = arr[j];
		arr[j + 1] = temp;

		/*for (int j = i - 1; j >= 0; j--) {
			if (arr[j] > arr[j + 1]) {
				arr[j + 1] = arr[j];
				arr[j] = temp;
			}
			else
				break;
		}*/
	}
}
