/* No.1003 단순 재귀로 피보나치 수를 구하면 왜 느릴까요? 함수 호출의 개수가 기하급수적으로 늘어나기 때문입니다. */
#include <stdio.h>

void fibo(int *);

int main() {
	int cnt, num;
	int arr[41] = { 0 };

	fibo(arr);
	scanf("%d", &cnt);
	while (cnt--) {
		scanf("%d", &num);
		if (num == 0)
			printf("%d %d \n", 1, 0);
		else
			printf("%d %d \n", arr[num -1], arr[num]);
	}
	return 0;
}

void fibo(int * arr) {
	arr[0] = 0;
	arr[1] = 1;
	for (int i = 2; i <= 40; i++)
		arr[i] = arr[i - 2] + arr[i - 1];
}
