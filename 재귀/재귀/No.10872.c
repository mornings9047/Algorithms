/* No.10872 팩토리얼은 단순 for문으로도 구할 수 있지만, 학습을 위해 재귀를 써 봅시다. */
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
