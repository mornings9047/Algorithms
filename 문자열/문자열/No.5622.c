/* No.5622 ��Ģ�� ���� ���ڿ� �����ϴ� ���� ����ϴ� ���� */
#include <stdio.h>
#include <string.h>

int call(char *);

int main() {
	int sec = 0;
	char str[16];

	scanf("%s", str);
	sec = call(str);
	printf("%d \n", sec);

	return 0;
}

int call(char * str) {
	int sum = 0, d = 3;		// ABC�� 2, DEF�� 2 ... ��, �׷����� ���� ����
	int length = strlen(str);

	for (int i = 0; i < length; i++)
		sum += ((str[i] - 65) / d + 2 + 1);

	return sum;
}
