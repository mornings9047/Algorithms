/* No.3009 직사각형을 완성하는 문제 */
#include <stdio.h>

int point(int *);

int main() {
	int x[3] = { 0 };
	int y[3] = { 0 };
	for (int i = 0; i < 3; i++)
		scanf("%d %d", &x[i], &y[i]);
	printf("%d %d \n", point(x), point(y));
	return 0;
}

int point(int * arr) {
	int num[2] = { arr[0], 0 };
	int cnt[2] = { 1, 0 };

	for (int i = 1; i < 3; i++) {
		if (arr[i] == num[0])
			cnt[0]++;
		else {
			num[1] = arr[i];
			cnt[1]++;
		}
	}

	return cnt[0] == 1 ? num[0] : num[1];
}
