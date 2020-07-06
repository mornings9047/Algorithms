/* No.1181 단어의 순서를 정의하여 정렬하는 문제 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void sort(char **, int);
void swap(char **, int);
void destroy(char **, int);

struct Word {
	char str[50];
	int size;
} word;

int main() {
	int cnt;
	char str[50];
	struct word * arr[20000];

	scanf("%d", &cnt);
	for (int i = 0; i < cnt; i++) {
		scanf("%s", word.str);
		word.size = strlen(word.str);
		//arr[i] = (char *)malloc(sizeof(char) * strlen(str));
		strcpy(arr[i], str);
	}
	
	sort(arr, cnt);

	for (int i = 1; i < cnt; i++) {
		if (strcmp(arr[i], arr[i - 1]) == 0)
			continue;
		printf("%s \n", arr[i]);
	}

	destroy(arr, cnt);
	return 0;
}

void sort(char ** arr, int cnt) {
	for (int i = 0; i < cnt; i++) {
		for (int j = 0; j < cnt - i - 1; j++) {
			if (i == j || strlen(arr[j]) < strlen(arr[j + 1]))
				continue;
			else if (strlen(arr[j]) > strlen(arr[j + 1]))	// 문자열의 길이가 짧은 것이 앞으로
				swap(arr, j);
			else {	// 문자열의 길이가 같으면 사전 순으로
				if (strcmp(arr[j], arr[j + 1]) > 0)
					swap(arr, j);
			}
		}
	}
}

void swap(char ** arr, int j) {
	char * temp = arr[j];
	arr[j] = arr[j + 1];
	arr[j + 1] = temp;
}

void destroy(char ** arr, int cnt) {
	for (int i = 0; i < cnt; i++)
		free(arr[i]);
}
