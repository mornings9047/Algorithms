/* No.1152 단어의 개수를 구하는 문제 */
#include <stdio.h>
#include <string.h>

int main() {
	char str[1000001];
	int result, cnt = 1, length = 0;

	gets(str);

	length = strlen(str);

	if (str[length - 1] == ' ')		// 마지막 문자가 공백인 경우
		length--;

	for (int i = 0; i < length; i++) {
		if (str[i] == ' ')
			cnt++;
	}

	if (str[0] == ' ')			// 첫 문자가 공백인 경우
		cnt--;

	printf("%d \n", cnt);
	return 0;
}
