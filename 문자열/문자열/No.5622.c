/* No.5622 규칙에 따라 문자에 대응하는 수를 출력하는 문제 */
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
	int sum = 0, d = 3;		// ABC는 2, DEF는 2 ... 즉, 그룹으로 묶는 개수
	int length = strlen(str);

	for (int i = 0; i < length; i++)
		sum += ((str[i] - 65) / d + 2 + 1);

	return sum;
}
