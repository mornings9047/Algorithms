/* No.1000 �� ���� �Է¹ް� ���� ����ϴ� ���� */
#include <stdio.h>

int main()
{
	int A, B;
	while (1)
	{
		scanf("%d %d", &A, &B);
		if (A > 0 && A < 10 && B>0 && B < 10)
		{
			printf("%d", A + B);
			return 0;
		}
	}
}
