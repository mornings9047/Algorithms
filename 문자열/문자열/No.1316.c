/* No.1316 ���ǿ� �´� ���ڿ��� ã�� ���� */
#include <stdio.h>
#include <string.h>

int group(char *);
int rep(char *, char, int);

int main() {
	int cnt, result = 0;
	char str[101];

	scanf("%d", &cnt);
	for (int i = 0; i < cnt; i++) {
		scanf("%s", str);
		result += group(str);
	}
	printf("%d \n", result);

	return 0;
}

int group(char * str) {
	char arr[26];
	int length = strlen(str);
	int index = 1;

	arr[0] = str[0];	// �ʱⰪ ����
	for (int i = 1; i < length; i++) {
		if (str[i - 1] == str[i])	// ���ڰ� �����ؼ� ������ ���
			continue;
		else {		// N��° ���ڿ� N+1��° ���ڰ� �ٸ� ���
			if (rep(arr, str[i], index))	// �ߺ��Ǵ� ���ڰ� ������ return 0
				return 0;
			else		// �ߺ��Ǵ� ���ڰ� ������ �迭�� ���� �߰�
				arr[index++] = str[i];
		}
	}

	return 1;
}

int rep(char * arr, char ch, int length) {		// arr: ���ڰ� ����� �迭, ch: �迭�� ������ ����, index: �迭�� ����� ���� ����
	for (int i = 0; i < length; i++) {		// �迭 �ȿ� �ߺ��� ���ڰ� ������ 0 return
		if (arr[i] == ch)
			return 1;
	}
	return 0;
}
