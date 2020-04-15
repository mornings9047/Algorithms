/* No.2908 숫자를 뒤집어서 비교하는 문제 */
#include <stdio.h>

int main() {
	char str1[4], str2[4];
	int num1, num2, max;
	scanf("%s %s", str1, str2);

	num1 = (str1[2] - 48) * 100 + (str1[1] - 48) * 10 + str1[0] - 48;
	num2 = (str2[2] - 48) * 100 + (str2[1] - 48) * 10 + str2[0] - 48;

	max = (num1 > num2 ? num1 : num2);
	printf("%d \n", max);

	return 0;
}
