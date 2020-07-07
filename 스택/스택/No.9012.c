/* No.9012 주어진 문자열이 올바른 괄호열인지 판단하는 문제 */
#include <stdio.h>
#include <string.h>
#define max 50

char stack[max];
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

int push(int num) {
	if (!isFull()) {
		stack[size++] = num;
		return 1;
	}
	return 0;
}

int pop() {
	if (isEmpty())
		return 0;
	return stack[--size];
}

void VPS(char * str) {
	reset();
	if (strlen(str) % 2 == 1 || str[strlen(str) - 1] != ')') {
		printf("NO \n");
		return;
	}

	for (int i = 0; i < strlen(str); i++) {
		if (str[i] == '(')
			push(str[i]);
		else {
			if (pop() == '(')
				continue;
			else {
				printf("NO \n");
				return;
			}
		}
	}

	if (isEmpty())
		printf("YES \n");
	else
		printf("NO \n");
}

int main() {
	int cnt;
	char str[max];

	scanf("%d", &cnt);
	while (cnt--) {
		scanf("%s", str);
		VPS(str);
	}
	return 0;
}
