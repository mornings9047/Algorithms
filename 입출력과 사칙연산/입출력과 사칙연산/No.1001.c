/* No.1001 두 수를 입력받고 뺄셈을 한 결과를 출력하는 문제 */
#include <stdio.h>

int main()
{
	int A, B;
	while (1)
	{
		scanf("%d %d", &A, &B);
		if (A > 0 && A < 10 && B>0 && B < 10)
		{
			printf("%d", A - B);
			return 0;
		}
	}
}
