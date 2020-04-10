/* No.10818 최솟값과 최댓값을 찾는 문제 */
#include <stdio.h>

int main() {
	int arr[1000000] = { 0 };		// 배열 크기 조절
	int max = -1000000;
	int min = 1000000;
	int num;
	scanf("%d", &num);

	for (int i = 0; i < num; i++) {
		scanf(" %d", &arr[i]);
		max = (arr[i] > max ? arr[i] : max);
		min = (arr[i] < min ? arr[i] : min);
	}

	printf("%d %d \n", min, max);

	return 0;
}
