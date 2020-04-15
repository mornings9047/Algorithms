/* No.2908 숫자를 뒤집어서 비교하는 문제 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int reverse(char *);

int main() {
	char str1[10], str2[10];
	int num1, num2, max;
	scanf("%s %s", str1, str2);

	num1 = reverse(str1);
	num2 = reverse(str2);

	max = (num1 > num2 ? num1 : num2);
	printf("%d \n", max);

	return 0;
}

int reverse(char * str) {
	int num;	// 뒤집은 숫자
	int length = strlen(str);	// 문자열의 길이

	for (int i = 0; i < length / 2; i++) {
		int temp = str[i];
		str[i] = str[length - 1 - i];
		str[length - 1 - i] = temp;
	}

	num = atoi(str);

	return num;
}