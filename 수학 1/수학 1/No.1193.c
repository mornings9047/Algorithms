/* No.1193 �м��� �������� ��Ģ�� ã�� ���� */
#include <stdio.h>

int main() {
	int input;
	int sum = 0, inc = 1;	// �밢���� �и�, ������ ���� 1+1, 1+2, 1+3 ... ���� ����, �迭�� inc �� inc �� ������
	int up, down;	// ����, �и�

	scanf("%d", &input);
	while (sum + inc < input)
		sum += inc++;

	if (inc % 2 == 0) {
		up = inc;
		down = 1;
		for (int i = 0; i < sum + inc - input; i++) {
			up--;
			down++;
		}
	}
	else {
		up = 1;
		down = inc;
		for (int i = 0; i < sum + inc - input; i++) {
			up++;
			down--;
		}
	}
	printf("%d/%d \n", up, down);
	return 0;
}
