/* No.10773 가장 최근에 쓴 수를 지우는 문제 */
#include <stdio.h>
#define max 100000

int stack[max];
int size = 0;

void reset() {
	for (int i = 0; i < max; i++)
		stack[i] = 0;
	size = 0;
}

int isEmpty() {
	return size == 0;
}

int isFull() {
	return size == max + 1;
}

void push(int num) {
	if (!isFull())
		stack[size++] = num;
}

int pop() {
	return isEmpty() ? 0 : stack[--size];
}

int main() {
	int cnt, num, sum = 0;
	scanf("%d", &cnt);
	while (cnt--) {
		scanf("%d", &num);
		num == 0 ? pop() : push(num);
	}
	while (!isEmpty())
		sum += pop();
	printf("%d \n", sum);
	return 0;
}
