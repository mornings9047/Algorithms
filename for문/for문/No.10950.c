/* No.10950 A+B�� ���� �� ����ϴ� ���� */
#include <stdio.h>

int main() {
	int cnt, a, b, sum = 0;
	scanf("%d", &cnt);

	for (int i = 0; i < cnt; i++) {
		scanf("%d %d", &a, &b);
		sum = a + b;
		printf("%d \n", sum);
	}
	return 0;
}
