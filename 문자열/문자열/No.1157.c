/* No.1157 �־��� �ܾ�� ���� ���� ���� ���ĺ��� ����ϴ� ���� */
#include <stdio.h>
#include <string.h>

int main() {
	char str[1000000];
	int alp[26] = { 0 };
	int length = 0;
	int max = -1;
	char result = '\0';

	scanf("%s", str);
	length = strlen(str);

	for (int i = 0; i < length; i++) {
		if (97 <= str[i] && str[i] <= 124)	// ���ĺ��� �ҹ����� ��� (a = 97, A= 65)
			alp[str[i] - 97]++;
		else
			alp[str[i] - 65]++;
	}

	for (int i = 0; i < 26; i++) {		// ���� ���� ���� ���ĺ� ���ϱ�
		if (max < alp[i]) {
			max = alp[i];
			result = i + 65;
		}
		else if (max == alp[i])
			result = '?';
	}
	
	printf("%c \n", result);

	return 0;
}
