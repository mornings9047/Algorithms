/* No.10809.c 한 단어에서 각 알파벳이 처음 등장하는 위치를 찾는 문제 */
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
