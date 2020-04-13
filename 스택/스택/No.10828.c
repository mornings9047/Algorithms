/* No.10828 ������ ������ ������ �ǽ��ϴ� ���� */
#include <stdio.h>
#include <string.h>
#define MAX 10000

void pushX(int);	// ���� X�� ���ÿ� �ִ� �����̴�.
int pop();		// ���ÿ��� ���� ���� �ִ� ������ ����, �� ���� ����Ѵ�. ���� ���ÿ� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.
int top();		// ������ ���� ���� �ִ� ������ ����Ѵ�. ���� ���ÿ� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.
int size();		// ���ÿ� ����ִ� ������ ������ ����Ѵ�.
int empty();	// ������ ��������� 1, �ƴϸ� 0�� ����Ѵ�.
int full();     // ������ ���� �������� 1, �ƴϸ� 0�� ����Ѵ�.

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
