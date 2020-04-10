/* No.5543 if문으로 가장 싼 세트 메뉴 주문하기 */
#include <stdio.h>
#define BURGER_CNT 3
#define COLA_CNT 2

int main() {
	int burger, cola;
	int b_min = 2000, c_min = 2000;
	int sum = 0;

	for (int i = 0; i < BURGER_CNT; i++) {
		scanf("%d", &burger);
		b_min = (burger < b_min ? burger : b_min);
	}

	for (int i = 0; i < COLA_CNT; i++) {
		scanf("%d", &cola);
		c_min = (cola < c_min ? cola : c_min);
	}

	sum = b_min + c_min - 50;
	printf("%d \n", sum);
	return 0;
}
