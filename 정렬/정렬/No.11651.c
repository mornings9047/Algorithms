/* No.11651 좌표를 다른 순서로 정렬하는 문제 */
#include <stdio.h>
#include <stdlib.h>

typedef struct Point {
	int x;
	int y;
} point;

int compare(const void *, const void *);

int main() {
	int cnt;
	scanf("%d", &cnt);
	point * arr = (point *)malloc(sizeof(point) * cnt);
	for (int i = 0; i < cnt; i++)
		scanf("%d %d", &arr[i].x, &arr[i].y);
	qsort(arr, cnt, sizeof(point), compare);
	for (int i = 0; i < cnt; i++)
		printf("%d %d \n", arr[i].x, arr[i].y);
	return 0;
}

int compare(const void * first, const void * second) {
	if ((*(point *)first).y > (*(point *)second).y)
		return 1;
	else if ((*(point *)first).y == (*(point *)second).y)
		return (*(point *)first).x < (*(point *)second).x ? 0 : 1;
	else
		return -1;
}
