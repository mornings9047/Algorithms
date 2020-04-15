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

	for (int i = 0; i < length; i++) {
		if (str[i] > 'R') {		// 예외: { P, Q, R, S }, { W, X, Y, Z}은 4개씩 그룹으로 묶여있으므로 S부터 -1칸씩 이동한 것처럼 계산 ( T->S, U->T ...)
			sum += ((str[i] - 66) / d + 2 + 1);
			if (str[i] == 'Z')
				sum--;
			continue;
		}
		sum += ((str[i] - 65) / d + 2 + 1);
	}
	return sum;
}
