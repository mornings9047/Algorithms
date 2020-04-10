/* No.2884 ½Ã°£ »¬¼À ¹®Á¦ */
#include <stdio.h>

int main() {
	int hour, min;
	scanf("%d %d", &hour, &min);

	if (min >= 45)
		min -= 45;
	else {
		if (hour == 0) {
			hour = 23;
			min += 15;
		}
		else {
			hour--;
			min += 15;
		}
	}
	printf("%d %d \n", hour, min);
}
