/* No.1152 �ܾ��� ������ ���ϴ� ���� */
#include <stdio.h>
#include <string.h>

int main() {
	char str[1000001];
	int result, cnt = 1, length = 0;

	gets(str);

	length = strlen(str);

	if (str[length - 1] == ' ')		// ������ ���ڰ� ������ ���
		length--;

	for (int i = 0; i < length; i++) {
		if (str[i] == ' ')
			cnt++;
	}

	if (str[0] == ' ')			// ù ���ڰ� ������ ���
		cnt--;

	printf("%d \n", cnt);
	return 0;
}
