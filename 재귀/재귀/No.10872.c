/* No.10872 ���丮���� �ܼ� for�����ε� ���� �� ������, �н��� ���� ��͸� �� ���ô�. */
#include <stdio.h>

int factorial(int);

int main() {
	int num;
	scanf("%d", &num);
	printf("%d \n", factorial(num));
	return 0;
}

int factorial(int num) {
	if (num < 2)
		return 1;
	return num * factorial(num - 1);
}
