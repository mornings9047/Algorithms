/* No.10809.c �� �ܾ�� �� ���ĺ��� ó�� �����ϴ� ��ġ�� ã�� ���� */
#include <stdio.h>
#include <string.h>

int main() {
	char str[100];
	int alp[26];
	for (int i = 0; i < 26; i++)
		alp[i] = -1;

	scanf("%s", str);

	for (int i = 0; i < strlen(str); i++) {
		if (alp[str[i] - 97] == -1)
			alp[str[i] - 97] = i;
	}

	for (int i = 0; i < 26; i++)
		printf("%d ", alp[i]);
	printf("\n");
	return 0;
}
