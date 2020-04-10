/* No.2742 구구단을 출력해봅니다 */
#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 1; i < 10; i++)
		printf("%d * %d = %d \n", n, i, n*i);
}
