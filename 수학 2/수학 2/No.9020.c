/* No.9020 소수 응용 문제 2 */
#include <stdio.h>
#define max 10000
#define primeSize 1231

void sieve(int *);
void setPrime(int *, int *);
void goldBach(int *, int);

int main() {
	int cnt, num;
	int arr[max + 1] = { 0 };
	int prime[primeSize + 1] = { 0 };

	sieve(arr);
	setPrime(arr, prime);

	scanf("%d", &cnt);
	while (cnt--) {
		scanf("%d", &num);
		goldBach(prime, num);
	}
	return 0;
}

void sieve(int * arr) {
	for (int i = 0; i <= max; i++)
		arr[i] = 1;
	for (int i = 2; i <= max; i++) {
		for (int j = i * i; j <= max; j += i) {
			if (arr[j] == 0)
				continue;
			else
				arr[j] = 0;
		}
	}
}

void setPrime(int * arr, int * prime) {
	int index = 0;
	for (int i = 0; i <= max; i++) {
		if (arr[i] == 1)
			prime[index++] = i;
	}
}

void goldBach(int * prime, int num) {
	int p1, p2, min = max;

	for (int i = 0; i <= primeSize; i++) {
		for (int j = i; j <= primeSize; j++) {
			if (prime[i] + prime[j] > num)
				break;
			else if (prime[i] + prime[j] == num) {
				if (min > prime[j] - prime[i]) {
					min = prime[j] - prime[i];
					p1 = prime[i];
					p2 = prime[j];
				}
			}
		}
	}
	printf("%d %d \n", p1, p2);
}
