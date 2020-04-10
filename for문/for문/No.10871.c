/* No.10871 for와 if를 같이 쓰는 문제 */
#include <stdio.h>

int main()
{
	int cnt, num, temp, out = 0;
	scanf("%d %d", &cnt, &num);
	while (cnt > out++) {
		scanf("%d", &temp);
		if (temp < num)
			printf("%d ", temp);
	}
}
