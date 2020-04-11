/* No.8958 OX 퀴즈의 결과를 일차원 배열로 입력받아 점수를 계산하는 문제 */
#include <stdio.h>
#include <string.h>

int main() {
	int cnt, score, sum;
	char arr[80] = { 0 };

	scanf("%d", &cnt);

	for (int i = 0; i < cnt; i++) {
		score = sum = 0;
		scanf("%s", &arr);
		
		for (int j = 0; j < strlen(arr); j++) {
			if (arr[j] == 'O')
				sum += ++score;
			else
				score = 0;
		}
		printf("%d \n", sum);
	}

	return 0;
}
