/* No.2869 �������� �������� ����ϴ� ���� */
#include <stdio.h>

int main() {
	int up, down, height, date;
	scanf("%d %d %d", &up, &down, &height);

	date = (height - up) / (up - down) + 1;	// height���� up�� �� �Ÿ��� �Ϸ絿�� �ö� �� �ִ� �Ÿ��� ������ ��, �Ϸ縸 �� �ö󰡸� Ż��
	if ((height - up) % (up - down) != 0)	// �������� 0�� �ƴϸ� �ö� �Ÿ��� �����ִٴ� �ǹ��̹Ƿ� �߰��� 1�� ���Ѵ�.
		date++;
	// date = (height - down - 1) / (up - down) + 1;

	printf("%d \n", date);
	return 0;
}
