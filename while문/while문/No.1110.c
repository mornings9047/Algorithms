/* No.1110 원래 수로 돌아올 때까지 연산을 반복하는 문제 */
#include <stdio.h>

int main() {
	int input, temp;
	int cnt = 0;
	int addr;

	scanf("%d", &input);
	temp = input;

	while (1) {
		addr = (temp / 10 + temp % 10) % 10;
		temp = (temp % 10) * 10 + addr;
		cnt++;
		if (input == temp)
			break;
	}

	printf("%d \n", cnt);
	return 0;
}
