/* No.1003 �ܼ� ��ͷ� �Ǻ���ġ ���� ���ϸ� �� �������? �Լ� ȣ���� ������ ���ϱ޼������� �þ�� �����Դϴ�. */
#include <stdio.h>

void fibo(int *);

int main() {
	int cnt, num;
	int arr[41] = { 0 };

	fibo(arr);
	scanf("%d", &cnt);
	while (cnt--) {
		scanf("%d", &num);
		if (num == 0)
			printf("%d %d \n", 1, 0);
		else
			printf("%d %d \n", arr[num -1], arr[num]);
	}
	return 0;
}

void fibo(int * arr) {
	arr[0] = 0;
	arr[1] = 1;
	for (int i = 2; i <= 40; i++)
		arr[i] = arr[i - 2] + arr[i - 1];
}
