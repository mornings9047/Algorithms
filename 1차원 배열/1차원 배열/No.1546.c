/* No.1546 ����� �����ϴ� ���� */
#include <stdio.h>

int main() {
	int cnt, max = 0;
	double sum = 0;
	double arr[1000] = { 0 };
	scanf("%d", &cnt);

	for (int i = 0; i < cnt; i++) {
		scanf("%lf", &arr[i]);
		max = (arr[i] > max ? arr[i] : max);
	}

	for (int i = 0; i < cnt; i++) {
		arr[i] = arr[i] / max * 100;
		sum += arr[i];
	}

	printf("%f \n", (double)sum/cnt);
	return 0;
}
