/* No.10818 �ּڰ��� �ִ��� ã�� ���� */
#include <stdio.h>

int main() {
	int arr[1000000] = { 0 };		// �迭 ũ�� ����
	int max = -1000000;
	int min = 1000000;
	int num;
	scanf("%d", &num);

	for (int i = 0; i < num; i++) {
		scanf(" %d", &arr[i]);
		max = (arr[i] > max ? arr[i] : max);
		min = (arr[i] < min ? arr[i] : min);
	}

	printf("%d %d \n", min, max);

	return 0;
}
