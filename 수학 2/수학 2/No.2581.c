/* No.2581 소수를 찾는 문제 2 */
#include <stdio.h>

int isPrime(int);

int main() {
	int n1, n2;
	int sum = 0, min = 9999;
	scanf("%d %d", &n1, &n2);

	for (int i = n2; i >= n1; i--) {
		if (isPrime(i)) {
			sum += i;
			min = i;
		}
	}
	if (sum == 0)
		printf("-1 \n");
	else {
		printf("%d \n", sum);
		printf("%d \n", min);
	}
	return 0;
}

int isPrime(int num) {
	if (num == 1)
		return 0;
	for (int i = num - 1; i > 1; i--) {
		if (num%i == 0)
			return 0;
	}
	return 1;
}
