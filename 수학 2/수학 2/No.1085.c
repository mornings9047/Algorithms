/* No.1085 직사각형과 점의 거리를 구하는 문제 */
#include <stdio.h>

int distance(int, int, int, int);

int main() {
	int x, y, w, h;
	scanf("%d %d %d %d", &x, &y, &w, &h);
	printf("%d \n", distance(x, y, w, h));
	return 0;
}

int distance(int x, int y, int w, int h) {
	int w_min = 1000, h_min = 1000;
	w_min = w - x < x ? w - x : x;
	h_min = h - y < y ? h - y : y;
	return w_min < h_min ? w_min : h_min;
}
