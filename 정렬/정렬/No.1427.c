/* No.1427 숫자를 정렬하는 문제 */
#include <stdio.h>
#include <stdlib.h>

void sortArray(int);
int compare(const void *, const void *);

int main() {
	int num;
	scanf("%d", &num);
	sortArray(num);
	return 0;
}

void sortArray(int num) {
	int mod = 1;
	int cnt = 0;
	int arr[10] = { 0 };
	while (num / mod != 0) {
		arr[cnt++] = (num % (mod * 10)) / mod;
		mod *= 10;
	}
	qsort(arr, cnt, sizeof(int), compare);
	for (int i = 0; i < cnt; i++)
		printf("%d", arr[i]);
	printf("\n");
}

int compare(const void * first, const void * second) {
	if (*(int *)first > *(int *)second)
		return -1;
	else if (*(int *)first == *(int *)second)
		return 0;
	else
		return 1;
}
