/* No.1065 X�� �Ѽ����� �Ǻ��ϴ� �Լ��� �����Ͽ� ������ �ذ��� ���ô�. */
#include <stdio.h>

int d(int);
int arr[3];

int main() {
	int num;
	scanf("%d", &num);
	printf("%d \n", d(num));
	return 0;
}

int d(int num) {
	int a, b, c, cnt = 0;
	if (num / 10 == 0 || num / 100 == 0)
		return num;

	cnt = 99;
	for (int i = 100; i <= num; i++) {
		a = i / 100;
		b = i % 100 / 10;
		c = i % 10;

		if (a - b == b - c)
			cnt++;
	}

	return cnt;
}
