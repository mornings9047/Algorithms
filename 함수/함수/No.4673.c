/* No.4673 �Լ� d�� �����Ͽ� ������ �ذ��� ���ô�. */
#include <stdio.h>
#define MAX 10001

int arr[MAX] = { 0 };
void d(int);

int main() {
	for (int i = 0; i < MAX; i++)
		d(i);

	for (int i = 0; i < MAX; i++) {
		if (arr[i] != 1)
			printf("%d \n", i);
	}
	return 0;
}

void d(int n) {
	int cons = n, x = 1;

	while (1) {
		if (n / (x * 10) == 0) {
			cons += (n / x);
			break;
		}
		cons += (n % (x * 10)) / x;
		x *= 10;
	}
	arr[cons] = 1;
}
