/* No.2292 벌집이 형성되는 규칙에 따라 벌집의 위치를 구하는 문제 */
#include <stdio.h>

int main() {
	int num, cnt = 1;
	int outer = 0;		// outer: 최외각에 있는 제일 큰 숫자 + 1 (0, 6, 18, 36, 60 ...) + 1
	int d = 6;		// 육각형이므로 6을 이용

	scanf("%d", &num);
	while (1) {
		if (num <= outer + 1)
			break;

		outer += d * cnt++;
	}

	printf("%d \n", cnt);
	return 0;
}
