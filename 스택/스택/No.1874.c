/* No.1874 스택을 활용하는 문제 1 */
#include <stdio.h>
#include <stdlib.h>
#define MAX 100000

int stack[MAX];
char result[MAX * 2];
int size = 0;
int rsize = 0;

void push(int num) {
	stack[size++] = num;
}

int pop() {
	return stack[--size];
}

void push_r(char ch) {
	result[rsize++] = ch;
}

void printResult() {
	for (int i = 0; i < rsize; i++)
		printf("%c \n", result[i]);
}

int main() {
	int cnt, max = 0, result = 1;
	int * arr;
	scanf("%d", &cnt);
	arr = (int *)malloc(sizeof(int) * cnt);
	for (int i = 0; i < cnt; i++) {
		scanf("%d", &arr[i]);
		if (!result)
			continue;
		if (max < arr[i]) {
			for (int j = max + 1; j <= arr[i]; j++) {
				push(j);
				push_r('+');
			}
			pop();
			push_r('-');
			max = max < arr[i] ? arr[i] : max;
		}
		else {
			if (arr[i] == pop())
				push_r('-');
			else
				result = 0;
		}
	}
	if(result)
		printResult();
	else
		printf("NO \n");
	return 0;
}
