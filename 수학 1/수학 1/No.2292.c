/* No.2292 ������ �����Ǵ� ��Ģ�� ���� ������ ��ġ�� ���ϴ� ���� */
#include <stdio.h>

int main() {
	int num, cnt = 1;
	int outer = 0;		// outer: �ֿܰ��� �ִ� ���� ū ���� + 1 (0, 6, 18, 36, 60 ...) + 1
	int d = 6;		// �������̹Ƿ� 6�� �̿�

	scanf("%d", &num);
	while (1) {
		if (num <= outer + 1)
			break;

		outer += d * cnt++;
	}

	printf("%d \n", cnt);
	return 0;
}
