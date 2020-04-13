/* No.10828 스택의 개념을 익히고 실습하는 문제 */
#include <stdio.h>
#include <string.h>
#define MAX 10000

void pushX(int);	// 정수 X를 스택에 넣는 연산이다.
int pop();		// 스택에서 가장 위에 있는 정수를 빼고, 그 수를 출력한다. 만약 스택에 들어있는 정수가 없는 경우에는 -1을 출력한다.
int top();		// 스택의 가장 위에 있는 정수를 출력한다. 만약 스택에 들어있는 정수가 없는 경우에는 -1을 출력한다.
int size();		// 스택에 들어있는 정수의 개수를 출력한다.
int empty();	// 스택이 비어있으면 1, 아니면 0을 출력한다.
int full();     // 스택이 가득 차있으면 1, 아니면 0을 출력한다.

int stack[MAX];
int cnt = 0;

int main() {
	int testcase;
	char arr[10];
	int input;

	scanf("%d", &testcase);
	for (int i = 0; i < testcase; i++) {
		scanf("%s", arr);

		if (!strcmp(arr, "push")) {
			scanf("%d", &input);
			pushX(input);
		}
		else if (!strcmp(arr, "pop")) {
			printf("%d \n", pop());
		}
		else if (!strcmp(arr, "top")) {
			printf("%d \n", top());
		}
		else if (!strcmp(arr, "size")) {
			printf("%d \n", size());
		}
		else if (!strcmp(arr, "empty")) {
			printf("%d \n", empty());
		}
	}

	return 0;
}


void pushX(int input) {
	if (full())
		return;
	stack[cnt++] = input;
}

int pop() {
	return (empty() ? -1 : stack[--cnt]);
}

int top() {
	return (empty() ? -1 : stack[cnt - 1]);
}

int size() {
	return cnt;
}

int empty() {
	return (cnt == 0 ? 1 : 0);
}

int full() {
	return (cnt == MAX ? 1 : 0);
}
