/* No.1978 소수를 찾는 문제 1 */
#include <stdio.h>

int isPrime(int);

int main() {
	int cnt, num, result = 0;
	scanf("%d", &cnt);
	for (int i = 0; i < cnt; i++) {
		scanf("%d", &num);
		result += isPrime(num);
	}
	printf("%d \n", result);
	return 0;
}

int isPrime(int num) {
	if (num == 1)
		return 0;
	for (int i = num - 1; i > 1; i--) {
		if (num % i == 0)
			return 0;
	}
	return 1;
}
