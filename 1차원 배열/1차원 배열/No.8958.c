/* No.8958 OX ������ ����� ������ �迭�� �Է¹޾� ������ ����ϴ� ���� */
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
