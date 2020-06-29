/* No.2775 층과 거주자 수의 규칙을 찾는 문제 */
#include <stdio.h>

int sum(int, int);

int main() {
	int testCnt;
	int floor, room;	// 층 수, 호 수
	int count = 0;

	scanf("%d", &testCnt);

	while (count++ < testCnt) {
		scanf("%d", &floor);
		scanf("%d", &room);

		printf("%d \n", sum(floor, room));
	}

	return 0;
}

int sum(int floor, int room) {
	if (floor == 0)
		return room;
	else {
		int total = 0;
		for (int i = 1; i <= room; i++)
			total += sum(floor - 1, i);
		return total;
	}
}
