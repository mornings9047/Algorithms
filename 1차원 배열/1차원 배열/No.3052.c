/* No.3052 위와 비슷한 문제 */
#include <stdio.h>
#define MOD 42

int main() {
	int arr[10] = { -1, -1, -1, -1, -1, -1, -1, -1, -1, -1 };
	int input, mod;
	int cnt = 0;
	int i, j;

	for (i = 0; i < 10; i++) {
		scanf("%d", &input);
		mod = input % 42;

		for (j = 0; j < i; j++) {
			if (arr[j] == mod)
				break;
		}

		//printf("i %d	j %d \n", i, j);
		if (i == j)
			arr[cnt++] = mod;

		//for (int k = 0; k < 10; k++)
		//	printf("%3d", arr[k]);
		//printf("\n\n");
	}
	printf("%d \n", cnt);

	return 0;
}
