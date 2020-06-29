/* No.1011 �Ÿ��� ���� ��ġ ��� Ƚ���� ����ϴ� ���� */
#include <stdio.h>

long move(int, int);

int main() {
	int testCnt;
	int src, dest;

	scanf("%d", &testCnt);
	while (testCnt--) {
		scanf("%d %d", &src, &dest);
		printf("%d \n", move(src, dest));
	}
	return 0;
}

long move(int src, int dest) {
	int distance = dest - src;
	int n = 1;

	// while (n * ++n <= distance) n * n�� 2^31�� �ʰ��ϸ� ������ �����Ƿ� �׻� distance���� �۴�.
	while (distance - n * n > 0)
		n++;

	if (distance - n * n == 0)
		return 2 * n - 1;
	else {
		n--;
		if (distance - n * n <= n)
			return 2 * n;
		else // (distance - n * n <= 2n)
			return 2 * n + 1;
		// distance - n*n <= 2n + 1 �� ���� distance - (n+1) * (n+1) = 0 �� �Ǵ� ����̴�.
	}

	/*int step = 0;
	long pos = 0;
	while (pos < distance)
		pos += step++ * 2;
	return distance <= pos - (--step) ? step * 2 - 1 : step * 2;*/
}
