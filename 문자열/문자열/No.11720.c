/* No.11720 ������ ���ڿ��� �Է¹޴� ���� */
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
