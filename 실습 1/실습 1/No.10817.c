/* No.10817 if문으로 두 번째로 작은 수 구하기 */
#include <stdio.h>

int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);

	if (a > b&&a > c) {
		if (b > c)
			printf("%d \n", b);
		else
			printf("%d \n", c);
	}
	else if (b > a&&b > c) {
		if (a > c)
			printf("%d \n", a);
		else
			printf("%d \n", c);
	}
	else {
		if (a > b)
			printf("%d \n", a);
		else
			printf("%d \n", b);
	}
}
