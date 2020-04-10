/* No.11021 A+B를 조금 더 아름답게 출력하는 문제 */
#include <stdio.h>

int main() {
	int cnt, a, b, sum = 0;
	scanf("%d", &cnt);
	for (int i = 1; i <= cnt; i++) {
		scanf("%d %d", &a, &b);
		sum = a + b;
		printf("Case #%d: %d \n", i, sum);
	}
	return 0;
}
