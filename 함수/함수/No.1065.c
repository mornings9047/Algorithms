/* No.1065 X가 한수인지 판별하는 함수를 정의하여 문제를 해결해 봅시다. */
#include <stdio.h>

int han(int);

int main() {
	int num;
	scanf("%d", &num);
	printf("%d \n", han(num));
	return 0;
}

int han(int num) {
	int a, b, c, cnt = 99;
	if (num < 100)
		return num;

	for (int i = 101; i <= num; i++) {
		a = i / 100;
		b = i % 100 / 10;
		c = i % 10;

		if (a - b == b - c)
			cnt++;
	}
	return cnt;
}
