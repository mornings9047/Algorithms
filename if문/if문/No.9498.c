/* No.9498 시험 점수를 성적으로 바꾸는 문제 */
#include <stdio.h>

int main()
{
	int num;
	scanf("%d", &num);
	if (num <= 100 && num >= 90)
		printf("A \n");
	else if (num >= 80)
		printf("B \n");
	else if (num >= 70)
		printf("C \n");
	else if (num >= 60)
		printf("D \n");
	else
		printf("F \n");
}
