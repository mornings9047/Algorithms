/* No.2562 최댓값이 어디에 있는지 찾는 문제 */
#include <stdio.h>

int main() {
	int arr[9];
	int max = 0, index = 0;

	for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
		scanf("%d", &arr[i]);
		if (max < arr[i]) {
			max = arr[i];
			index = i + 1;
		}
	}

	printf("%d \n", max);
	printf("%d \n", index);

	return 0;
}
