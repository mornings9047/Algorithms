/* No.2577 �� ���ڰ� �� �� ���Դ��� �����ϱ� ���� ������ �迭�� ����� ���� */
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
