/* No.2748 동적 계획법으로 피보나치 수를 계산하는 문제 */
#include <stdio.h>

void fibo(long long *);

int main() {
	long long f[91] = { 0 };
	int num;
	fibo(f);
	scanf("%d", &num);
	printf("%ld \n", f[num]);
	return 0;
}

void fibo(long long * f) {
	f[0] = 0;
	f[1] = 1;
	for (int i = 2; i < 91; i++)
		f[i] = f[i - 1] + f[i - 2];
}
