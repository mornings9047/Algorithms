/* No.2798 세 장의 카드를 고르는 모든 경우를 고려하는 문제 */
#include <stdio.h>
#include <stdlib.h>

int blackJack(int *, int, int);

int main() {
	int cnt, max, num;
	int * cards;

	scanf("%d %d", &cnt, &max);
	cards = malloc(sizeof(int)*cnt);
	for (int i = 0; i < cnt; i++) {
		scanf("%d", &num);
		cards[i] = num;
	}

	printf("%d \n", blackJack(cards, cnt, max));
	return 0;
}

int blackJack(int * cards, int cnt, int max) {
	int sum = 0;
	int result = 0;
	for (int i = 0; i < cnt - 2; i++) {
		for (int j = i + 1; j < cnt - 1; j++) {
			for (int k = j + 1; k < cnt; k++) {
				sum = cards[i] + cards[j] + cards[k];
				if (sum <= max && sum >= result)
					result = sum;
			}
		}
	}
	return result;
}
