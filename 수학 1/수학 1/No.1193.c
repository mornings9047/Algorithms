/* No.1193 분수의 순서에서 규칙을 찾는 문제 */
#include <stdio.h>

int main() {
	int input;
	int sum = 0, inc = 1;	// 대각선의 분모, 분자의 합이 1+1, 1+2, 1+3 ... 으로 증가, 배열이 inc × inc 로 결정됨
	int up, down;	// 분자, 분모

	scanf("%d", &input);
	while (sum + inc < input)
		sum += inc++;

	if (inc % 2 == 0) {
		up = inc;
		down = 1;
		for (int i = 0; i < sum + inc - input; i++) {
			up--;
			down++;
		}
	}
	else {
		up = 1;
		down = inc;
		for (int i = 0; i < sum + inc - input; i++) {
			up++;
			down--;
		}
	}
	printf("%d/%d \n", up, down);
	return 0;
}
