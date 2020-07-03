/* No.11729 재귀적인 패턴을 재귀함수로 찍는 문제 2 */
#include <stdio.h>
#include <math.h>
void hanoi(int, int, int, int);

int main() {
	int num;
	scanf("%d", &num);
	printf("%d \n", (1 << num) - 1);
	hanoi(1, 2, 3, num);
	return 0;
}

void hanoi(int start, int temp, int end, int num) {
	if (num == 0)
		return;
	hanoi(start, end, temp, num - 1);
	printf("%d %d \n", start, end);
	hanoi(temp, start, end, num - 1);
}
