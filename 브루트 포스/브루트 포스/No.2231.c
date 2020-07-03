/* No.2231 모든 경우를 시도하여 N의 생성자를 구하는 문제 */
#include <stdio.h>

int constructor(int);

int main() {
	int num;
	scanf("%d", &num);
	printf("%d \n", constructor(num));
	return 0;
}

int constructor(int num) {
	int sum, mod;
	int cons = 0;

	for (int i = num; i > 0; i--) {
		sum = i;
		mod = 1;
		while (i / mod != 0) {
			sum += (i % (mod * 10) / mod);
			mod *= 10;
		}
		if (sum == num)
			cons = i;
	}
	return cons;
}
