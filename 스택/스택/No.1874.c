/* No.1874 스택을 활용하는 문제 1 */
#include <stdio.h>
#include <stdlib.h>
#define MAX 100000

int stack[MAX];
int size = 0;

int isEmpty() {
	return size == 0;
}

int isFull() {
	return size == MAX + 1;
}

void push(int num) {
	printf("+ \n");
	if (!isFull())
		stack[size++] = num;
}

int pop() {
	return isEmpty() ? 0 : stack[--size];
}

void printResult(int * arr, int cnt) {

}

int main() {
	int cnt;
	int * arr;
	scanf("%d", &cnt);
	arr = (int *)malloc(sizeof(int) * cnt);
	for (int i = 0; i < cnt; i++)
		scanf("%d", &arr[i]);
	printResult(arr, cnt);
	return 0;
}
