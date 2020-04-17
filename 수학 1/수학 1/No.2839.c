/* No.2839 5와 3을 최소 횟수로 합하여 N을 만드는 문제 */
#include <stdio.h>

int main() {
	int sugar3 = 3, sugar5 = 5;
	int weight;

	scanf("%d", &weight);


	for (int i = 0; i <= weight / sugar3; i++) {
		for (int j = 0; j <= weight / sugar5; j++) {
			if (weight == sugar5 * j + sugar3 * i) {
				printf("%d \n", i + j);
				return 0;
			}

			if (weight < sugar5 * j + sugar3 * i)
				break;
		}
	}

	printf("-1");
	return 0;
}
