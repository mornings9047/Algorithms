/* No.11022 A+B�� �ٷ� �� �������� �Ƹ���� ����ϴ� ���� */
#include <stdio.h>

int main() {
	int cnt, a, b, sum = 0;
	scanf("%d", &cnt);
	for (int i = 1; i <= cnt; i++) {
		scanf("%d %d", &a, &b);
		sum = a + b;
		printf("Case #%d: %d + %d = %d \n", i, a, b, sum);
	}
	return 0;
}
