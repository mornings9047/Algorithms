/* No.4344 과연 그럴까요? */
#include <stdio.h>

int main() {
	int testcase, num, sum, cnt;
	double avg;
	int arr[1000] = { 0 };

	scanf("%d", &testcase);		// testcase 입력

	for (int i = 0; i < testcase; i++) {
		sum = cnt = 0;
		scanf("%d", &num);		// 학생 수 입력

		for (int j = 0; j < num; j++) {		// 학생들의 점수 입력
			scanf("%d", &arr[j]);
			sum += arr[j];
		}

		avg = (double)sum / num;		// 평균 점수 구하기

		for (int j = 0; j < num; j++) {		// 평균 점수 이상을 받은 학생 수 구하기
			if (avg < (double)arr[j])
				cnt++;
		}

		printf("%.3f%% \n", (double)cnt / num * 100);
	}

	return 0;
}
