/* No.4949 위와 같은데 괄호의 종류가 다양해진 문제 */
#include <stdio.h>

#define max 100

char stack[max];
int size = 0;

void reset() {
	for (int i = 0; i < max; i++)
		stack[i] = -1;
	size = 0;
}

int isEmpty() {
	return size == 0;
}

int isFull() {
	return size == max + 1;
}

void push(char ch) {
	if (!isFull())
		stack[size++] = ch;
}

char pop() {
	return isEmpty() ? 0 : stack[--size];
}

int isBalanced(char * str) {
	char ch;
	int index = 0;
	while ((ch = str[index++]) != '.') {
		if (ch == '(' || ch == '{' || ch == '[')
			push(ch);
		else {
			switch (ch) {
			case ')':
				if(pop() == '(')
					break;
				else
					return 0;
			case '}':
				if (pop() == '{')
					break;
				else
					return 0;
			case ']':
				if (pop() == '[')
					break;
				else
					return 0;
			default:
				break;
			}
		}
	}
	return isEmpty();
}

int main() {
	char str[max];
	char ch;
	int index = 0;
	while (1) {
		while ((ch = getchar()) != '\n')
			str[index++] = ch;
		if (str[0] == '.')
			break;
		if (isBalanced(str))
			printf("yes \n");
		else
			printf("no \n");
		reset();
		index = 0;
	}
	return 0;
}
