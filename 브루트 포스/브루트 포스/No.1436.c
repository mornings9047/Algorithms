/* No.1436 N번째 종말의 수가 나올 때까지 차례대로 시도하는 문제 */
#include <stdio.h>
#include <stdlib.h>

#define MAX 9999999

int title(int);
int six(int);

int main() {
	int num;
	scanf("%d", &num);
	printf("%d \n", title(num));
	return 0;
}

int title(int num) {
	int cnt = 0;
	int result;

	for (int i = 666; i <= MAX; i++) {
		if (six(i))
			cnt++;

		if (num == cnt) {
			result = i;
			break;
		}
	}
	return result;
}

int six(int num) {
	int cnt = 0;
	int mod = 1;

	while (num / mod != 0) {
		cnt = (num % (mod * 10)) / mod == 6 ? cnt + 1 : 0;
		if (cnt == 3)
			return 1;
		mod *= 10;
	}
	return 0;
}
