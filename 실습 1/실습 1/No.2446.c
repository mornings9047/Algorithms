/* No.2446 for문으로 별 찍기 2 */
#include <stdio.h>

int main() {
	int num, space = 0;
	scanf("%d", &num);

	for (int i = num; i > 0; i--) {
		for (int j = num; j > i; j--)
			printf(" ");

		for (int j = 2 * i - 1; j > 0; j--)
			printf("*");
		printf("\n");
	}

	for (int i = 1; i < num; i++) {
		for (int j = num - i - 1; j > 0; j--)
			printf(" ");

		for (int j = 0; j < i * 2 + 1; j++)
			printf("*");
		printf("\n");
	}

	return 0;
}
