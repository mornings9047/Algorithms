/* No.1002 �� ���� ������ ������ ���ϴ� ���� */
#include <stdio.h>
#include <math.h>

int turret(int, int, int, int, int, int);

int main() {
	int cnt;
	int x1, y1, r1, x2, y2, r2;

	scanf("%d", &cnt);
	while (cnt--) {
		scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
		printf("%d \n", turret(x1, y1, r1, x2, y2, r2));
	}
	return 0;
}

int turret(int x1, int y1, int r1, int x2, int y2, int r2) {
	double dist = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

	if (x1 == x2 && y1 == y2 && r1 == r2)	// ������ ���� ������ ���� ���
		return -1;
	else if (abs(r2 - r1) < dist && dist < r1 + r2)	// �� ������ ������ ���
		return 2;
	else if (abs(r2 - r1) == dist || dist == r1 + r2) // �� ������ ������ ���
		return 1;
	else    // ������ �ʴ� ���
		return 0;
}
