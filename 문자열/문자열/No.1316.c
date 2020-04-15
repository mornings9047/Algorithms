/* No.1316 조건에 맞는 문자열을 찾는 문제 */
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

	arr[0] = str[0];	// 초기값 설정
	for (int i = 1; i < length; i++) {
		if (str[i - 1] == str[i])	// 문자가 연속해서 나오는 경우
			continue;
		else {		// N번째 문자와 N+1번째 문자가 다른 경우
			if (rep(arr, str[i], index))	// 중복되는 문자가 있으면 return 0
				return 0;
			else		// 중복되는 문자가 없으면 배열에 문자 추가
				arr[index++] = str[i];
		}
	}

	return 1;
}

int rep(char * arr, char ch, int length) {		// arr: 문자가 저장된 배열, ch: 배열에 저장할 문자, index: 배열에 저장된 문자 개수
	for (int i = 0; i < length; i++) {		// 배열 안에 중복된 문자가 있으면 0 return
		if (arr[i] == ch)
			return 1;
	}
	return 0;
}
