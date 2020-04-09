/* No.2753 윤년을 판별하는 문제 */
#include <stdio.h>

int main() {
	int year, result = 0;
	scanf("%d", &year);

	if (year % 4 == 0) {
		if (year % 100 != 0 || year % 400 == 0)
			result = 1;
	}

	printf("%d", result);
	return 0;
}
