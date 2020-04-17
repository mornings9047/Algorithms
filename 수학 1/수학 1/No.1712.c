/* No.1712 이익이 발생하는 지점을 찾는 문제 */
#include <stdio.h>

int main() {
	int a, b, c;
	int breakpoint = -1;

	scanf("%d %d %d", &a, &b, &c);

	if (b >= c) {
		printf("%d \n", breakpoint);
		return 0;
	}

	breakpoint = (a / (c - b)) + 1;

	printf("%d \n", breakpoint);
	return 0;
}
