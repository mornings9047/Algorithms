/* No.4948 소수 응용 문제 1 */
#include <stdio.h>
#define size 123456

int isPrime(int);
void sieve(int *);

int main() {
	int num;
	int count;
	int arr[246913] = { 0 };
	sieve(arr);

	while (1) {
		scanf("%d", &num);
		if (num == 0)
			break;

		count = 0;
		for (int i = num + 1; i <= num * 2; i++)
			count += arr[i];
		printf("%d \n", count);
	}
	return 0;
}

void sieve(int * arr) {
	for (int i = 2; i < size * 2 + 1; i++)
		arr[i] = 1;

	for (int i = 2; i < size * 2 + 1; i++) {
		if (arr[i] == 0)
			continue;

		for (long j = i * 2; j < size * 2 + 1; j += i)
			arr[j] = 0;
	}
}
