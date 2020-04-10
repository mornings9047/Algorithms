/* No.8393 1부터 N까지의 합을 구하는 문제 */
#include <stdio.h>

int main()
{
	int n, sum = 0;
	scanf("%d", &n);

	for (int i = n; i > 0; i--)
		sum += i;
	printf("%d \n", sum);
}
