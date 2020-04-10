/* No.10951 입력이 끝날 때까지 A+B를 출력하는 문제 */
#include <stdio.h>

int main() {
	int a, b, sum = 0;

	//while (scanf("%d %d", &a, &b) != EOF) {
	while (scanf("%d %d", &a, &b) == 2) {
		sum = a + b;
		printf("%d \n", sum);
	}
	return 0;
}
