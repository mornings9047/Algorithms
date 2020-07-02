/* No.4153 ��Ÿ����� ������ ���� ���� ���� */
#include <stdio.h>

int rightTriangle(long, long, long);

int main() {
	long a, b, c;
	while (1) {
		scanf("%d %d %d", &a, &b, &c);
		if (a == 0 && b == 0 && c == 0)
			break;
		if (rightTriangle(a, b, c))
			printf("right \n");
		else
			printf("wrong \n");
	}
	return 0;
}

int rightTriangle(long a, long b, long c) {
	if (a > b && a > c)
		return a * a == b * b + c * c;
	if (b > c && b > a)
		return b * b == c * c + a * a;
	if (c > a&&c > b)
		return c * c == a * a + b * b;
	return 0;
}
