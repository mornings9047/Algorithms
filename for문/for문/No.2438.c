/* No.2438 별을 찍는 문제 1 */
#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		for (int j = 0; j < i; j++)
			printf("*");
		printf("\n");
	}
}
