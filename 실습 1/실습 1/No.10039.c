/* No.10039 사칙연산으로 다섯 학생의 평균 점수 구하기 */
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
