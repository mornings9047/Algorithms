/* No.2869 달팽이의 움직임을 계산하는 문제 */
#include <stdio.h>

int main() {
	int up, down, height, date;
	scanf("%d %d %d", &up, &down, &height);

	date = (height - up) / (up - down) + 1;	// height에서 up을 뺀 거리를 하루동안 올라갈 수 있는 거리로 나눠준 후, 하루만 더 올라가면 탈출
	if ((height - up) % (up - down) != 0)	// 나머지가 0이 아니면 올라갈 거리가 남아있다는 의미이므로 추가로 1을 더한다.
		date++;
	// date = (height - down - 1) / (up - down) + 1;

	printf("%d \n", date);
	return 0;
}
