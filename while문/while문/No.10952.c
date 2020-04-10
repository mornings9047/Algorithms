/* No.10952 0 0이 들어올 때까지 A+B를 출력하는 문제 */
#include <stdio.h>

int main() {
	int a, b, sum = 0;

	while (1) {
		scanf("%d %d", &a, &b);
		if (a == 0 && b == 0)
			break;
		sum = a + b;
		printf("%d \n", sum);
	}
	return 0;
}
