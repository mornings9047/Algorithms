/* No.10250 ȣ�� �� ��ȣ�� ��Ģ�� ã�� ����ϴ� ���� */
#include <stdio.h>

int main() {
	int testCnt;	//testCase ����
	int fCnt, rCnt, num;	// �� ��, �� ���� ���� ��, �� ��° �մ�����
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
