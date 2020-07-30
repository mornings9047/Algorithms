/* No.1260 DFS와 BFS를 다루는 문제 */
#include <stdio.h>
#include <stdlib.h>
#define MAX 1000

int vertex, line, start;
int ** arr;
int * visited;
void init(int);
void setArr(int);

void DFS(int);
void BFS(int);

int front = 0;
int rear = 0;
int queue[MAX] = { 0 };

void push(int vertex) {
	queue[rear++] = vertex;
}

int pop() {
	return queue[front++];
}

int isEmpty() {
	return front == rear;
}


void print(int vertex) {
	for (int i = 1; i <= vertex; i++) {
		for (int j = 1; j <= vertex; j++)
			printf("%d ", arr[i][j]);
		printf("\n");
	}
}

int main() {
	scanf("%d %d %d", &vertex, &line, &start);
	init(vertex);
	setArr(line);
	DFS(start);
	for (int i = 0; i <= vertex; i++)
		visited[i] = 0;
	printf("\n");
	BFS(start);
	return 0;
}

void init(int vertex) {
	arr = (int **)malloc(sizeof(int *) * vertex + 1);
	for (int i = 0; i <= vertex; i++) {
		arr[i] = (int *)malloc(sizeof(int) * vertex + 1);
		for (int j = 0; j <= vertex; j++)
			arr[i][j] = 0;
	}
}

void setArr(int line) {
	int row, col;
	for (int i = 0; i < line; i++) {
		scanf("%d %d", &row, &col);
		arr[row][col] = arr[col][row] = 1;
	}
	visited = (int *)malloc(sizeof(int) * vertex + 1);
	for (int i = 0; i <= vertex; i++)
		visited[i] = 0;
}

void DFS(int start) {
	visited[start] = 1;
	printf("%d ", start);
	for (int i = 1; i <= vertex; i++)
		if (arr[start][i] == 1 && visited[i] == 0)
			DFS(i);
}

void BFS(int start) {
	visited[start] = 1;
	push(start);
	printf("%d ", start);

	while (!isEmpty()) {
		int s = pop();
		for (int i = 1; i <= vertex; i++) {
			if (arr[s][i] == 1 && visited[i] == 0) {
				visited[i] = 1;
				printf("%d ", i);
				push(i);
			}
		}
	}
}
