/* No.10996 for문으로 별 찍기 3 */
#include <stdio.h>

int main() {
	int num;
	scanf("%d", &num);

	for (int i = 0; i < num; i++) {
		for (int j = 0; j < (num + 1) / 2; j++)
			printf("* ");
		printf("\n");
		for (int j = 0; j < num / 2; j++)
			printf(" *");
		printf("\n");
	}
}
