/* No.2588 �� ĭ�� �� ����? */
#include <stdio.h>

int main()
{
	int a, b;	// �Է¹��� �� ��
	int cal1, cal2, cal3;	// ���ϴ� �������� �߻��ϴ� ��
	int sum = 0;	// ���� ���

	scanf("%d %d", &a, &b);

	cal1 = a * (b % 10);
	cal2 = a * ((b % 100) / 10);
	cal3 = a * (b / 100);

	printf("%d \n", cal1);
	printf("%d \n", cal2);
	printf("%d \n", cal3);

	sum = cal1 + cal2 * 10 + cal3 * 100;
	printf("%d \n", sum);

	return 0;
}
