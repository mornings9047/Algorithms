/* No.1181 단어의 순서를 정의하여 정렬하는 문제 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Word {
	char str[50];
	int size;
} word;
int compare(const void *, const void *);

int main() {
	int cnt;

	scanf("%d", &cnt);
	word * arr = (word *)malloc(sizeof(word) * cnt);
	for (int i = 0; i < cnt; i++) {
		scanf("%s", arr[i].str);
		arr[i].size = strlen(arr[i].str);
	}

	qsort(arr, cnt, sizeof(word), compare);
	for (int i = 0; i < cnt; i++) {
		if (compare(arr[i].str, arr[i + 1].str) == 0)
			continue;
		printf("%s \n", arr[i].str);
	}
	return 0;
}

int compare(const void * first, const void * second) {
	if ((*(word *)first).size > (*(word *)second).size)
		return 1;
	else if ((*(word *)first).size == (*(word *)second).size)
		return strcmp((*(word *)first).str, (*(word *)second).str);
	else
		return -1;
}
