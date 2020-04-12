/* No.11720 정수를 문자열로 입력받는 문제 */
#include <stdio.h>
#include <string.h>

int main() {
	int length, sum = 0;
	char str[100];
	scanf("%d", &length);
	scanf("%s", str);
	for (int i = 0; i < strlen(str); i++)
		sum += (str[i] - 48);
	printf("%d \n", sum);
	return 0;
}
