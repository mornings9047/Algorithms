/* No.2908 ���ڸ� ����� ���ϴ� ���� */
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
	int num;	// ������ ����
	int length = strlen(str);	// ���ڿ��� ����

	for (int i = 0; i < length / 2; i++) {
		int temp = str[i];
		str[i] = str[length - 1 - i];
		str[length - 1 - i] = temp;
	}

	num = atoi(str);

	return num;
}