/* No.2675 �� ���ڸ� �ݺ��Ͽ� ����ϴ� ���� */
#include <stdio.h>
#include <string.h>

int main() {
	int testcase;
	int cnt;
	char str[20];

	scanf("%d", &testcase);
	for (int i = 0; i < testcase; i++) {
		scanf("%d %s", &cnt, str);
		for (int j = 0; j < strlen(str); j++) {
			for (int k = 0; k < cnt; k++) {
				printf("%c", str[j]);
			}
		}
		printf("\n");
	}

	return 0;
}
