/* No.1330 두 수를 비교한 결과를 출력하는 문제 */
#include <stdio.h>

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	if (a > b)
		printf(">");
	else if (a == b)
		printf("==");
	else
		printf("<");
	return 0;
}
