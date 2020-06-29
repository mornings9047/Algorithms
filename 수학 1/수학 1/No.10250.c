/* No.10250 호텔 방 번호의 규칙을 찾아 출력하는 문제 */
#include <stdio.h>

int main() {
	int testCnt;	//testCase 개수
	int fCnt, rCnt, num;	// 층 수, 각 층의 방의 수, 몇 번째 손님인지
	int floor, room;
	int count = 0;

	scanf("%d", &testCnt);
	while (count++ < testCnt) {
		scanf("%d %d %d", &fCnt, &rCnt, &num);

		floor = (num % fCnt == 0) ? fCnt : num % fCnt;
		room = (num%fCnt == 0) ? num / fCnt : num / fCnt + 1;

		printf("%d \n", floor * 100 + room);
	}
	return 0;
}
