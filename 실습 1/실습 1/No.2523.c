/* No.2523 for문으로 별 찍기 1 */
#include <stdio.h>

int main() {
	int num;
	scanf("%d", &num);

	for (int i = 0; i < num; i++) {
		for (int j = 0; j <= i; j++)
			printf("*");
		printf("\n");
	}

	for (int i = num - 1; i > 0; i--) {
		for (int j = 0; j < i; j++)
			printf("*");
		printf("\n");
	}
	return 0;
}
