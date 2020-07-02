/* No.3053 유클리드 기하학과 택시 기하학에 대한 문제 */
#include <stdio.h>
#include <math.h>
#define PI 3.14159265358979

double euclid(int);
double taxi(int);

int main() {
	int num;
	scanf("%d", &num);
	printf("%f \n", euclid(num));
	printf("%f \n", taxi(num));
	return 0;
}

double euclid(int num) {
	return pow(num, 2) * PI;
}

double taxi(int num) {
	return pow(num, 2) * 2;
}
