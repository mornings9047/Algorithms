/* No.2439 별을 찍는 문제 2 */
#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	for (int i = n; i > 0; i--) {
		for (int j = 1; j < i; j++)
			printf(" ");
		for (int j = 0; j < n - i + 1; j++)
			printf("*");
		printf("\n");
	}
}
