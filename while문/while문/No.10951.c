/* No.10951 �Է��� ���� ������ A+B�� ����ϴ� ���� */
#include <stdio.h>

int main() {
	int a, b, sum = 0;

	//while (scanf("%d %d", &a, &b) != EOF) {
	while (scanf("%d %d", &a, &b) == 2) {
		sum = a + b;
		printf("%d \n", sum);
	}
	return 0;
}
