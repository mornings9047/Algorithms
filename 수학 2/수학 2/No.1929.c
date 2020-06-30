/* No.1929 에라토스테네스의 체로 풀어 봅시다. */
#include <stdio.h>
#include <stdlib.h>

int main() {
	long n1, n2;
	long * arr = NULL;

	scanf("%d %d", &n1, &n2);
	arr = (long *)calloc(n2 + 1, sizeof(long));

	for (long i = 2; i <= n2; i++)
		arr[i] = 1;

	for (long i = 2; i <= n2; i++) {
		if (arr[i] == 0)
			continue;

		for (long j = i * i; j <= n2; j += i)
			arr[j] = 0;
	}

	for (long i = n1; i <= n2; i++) {
		if (arr[i])
			printf("%d \n", i);
	}

	free(arr);
	return 0;
}
