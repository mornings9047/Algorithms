/* No.4344 ���� �׷����? */
#include <stdio.h>

int main() {
	int testcase, num, sum, cnt;
	double avg;
	int arr[1000] = { 0 };

	scanf("%d", &testcase);		// testcase �Է�

	for (int i = 0; i < testcase; i++) {
		sum = cnt = 0;
		scanf("%d", &num);		// �л� �� �Է�

		for (int j = 0; j < num; j++) {		// �л����� ���� �Է�
			scanf("%d", &arr[j]);
			sum += arr[j];
		}

		avg = (double)sum / num;		// ��� ���� ���ϱ�

		for (int j = 0; j < num; j++) {		// ��� ���� �̻��� ���� �л� �� ���ϱ�
			if (avg < (double)arr[j])
				cnt++;
		}

		printf("%.3f%% \n", (double)cnt / num * 100);
	}

	return 0;
}
