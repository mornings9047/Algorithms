/* No.10870 피보나치 수 역시 단순 for문으로도 구할 수 있지만, 학습을 위해 재귀를 써 봅시다. */
#include <stdio.h>

int fibo(int);

int main() {
	int n;
	scanf("%d", &n);
	printf("%d \n", fibo(n));
	return 0;
}

int fibo(int n) {
	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	return fibo(n - 2) + fibo(n - 1);
}
