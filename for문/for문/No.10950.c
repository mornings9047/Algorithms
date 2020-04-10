/* No.10950 A+B를 여러 번 출력하는 문제 */
#include <stdio.h>

int main() {
	int cnt, a, b, sum = 0;
	scanf("%d", &cnt);

	for (int i = 0; i < cnt; i++) {
		scanf("%d %d", &a, &b);
		sum = a + b;
		printf("%d \n", sum);
	}
	return 0;
}
