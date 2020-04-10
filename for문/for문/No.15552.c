/* No.15552 빠르게 입력받고 출력하는 문제 */
#include <stdio.h>

int main()
{
	int cnt, a, b;
	scanf("%d", &cnt);
	for (int i = 0; i < cnt; i++) {
		scanf("%d %d", &a, &b);
		printf("%d \n", a + b);
	}
}
