/* No.14681 ���� ��� ��и鿡 �ִ��� �˾Ƴ��� ���� */
#include <stdio.h>

int main() {	
	int x, y;
	int quadrant;

	scanf("%d %d", &x, &y);

	if (x > 0) {
		if (y > 0)
			quadrant = 1;
		else
			quadrant = 4;
	}
	else {
		if (y > 0)
			quadrant = 2;
		else
			quadrant = 3;
	}

	printf("%d \n", quadrant);
}
