/* No.10039 ��Ģ�������� �ټ� �л��� ��� ���� ���ϱ� */
#include <stdio.h>
#define STUDENT_NUM 5

int main() {
	int score, sum = 0;
	for (int i = 0; i < STUDENT_NUM; i++) {
		scanf("%d", &score);
		if (score < 40)
			sum += 40;
		else
			sum += score;
	}
	printf("%d \n", sum / STUDENT_NUM);
	return 0;
}
