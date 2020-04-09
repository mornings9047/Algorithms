/* No.2588 빈 칸에 들어갈 수는? */
#include <stdio.h>

int main()
{
	int a, b;	// 입력받은 두 수
	int cal1, cal2, cal3;	// 곱하는 과정에서 발생하는 수
	int sum = 0;	// 최종 결과

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
