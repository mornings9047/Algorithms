/* No.14681 점이 어느 사분면에 있는지 알아내는 문제 */
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
