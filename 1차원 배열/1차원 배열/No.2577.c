/* No.2577 각 숫자가 몇 번 나왔는지 저장하기 위해 일차원 배열을 만드는 문제 */
#include <stdio.h>

int main() {
	int a, b, c, result;
	int arr[10] = { 0 };
	int x = 1;

	scanf("%d %d %d", &a, &b, &c);
	result = a * b * c;

	while (result / x != 0) {
		arr[(result % (x * 10)) / x]++;
		x *= 10;
	}
	
	for (int i = 0; i < 10; i++)
		printf("%d \n", arr[i]);

	return 0;
}
