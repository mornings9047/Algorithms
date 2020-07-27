/* No.10814 ���� ���� ������ ���İ��谡 �ٲ��� �ʴ� ���� �˰����� ���� ����(stable sort)�̶�� �մϴ�. */
#include <stdio.h>
#include <stdlib.h>

typedef struct Member {
	int age;
	char str[100];
} member;

void quickSort(int, member *);

int main() {
	int cnt;
	scanf("%d", &cnt);
	member * members = (member *)malloc(sizeof(member) * cnt);
	for (int i = 0; i < cnt; i++)
		scanf("%d %s", &members[i].age, members[i].str);

	quickSort(cnt, members);

	for (int i = 0; i < cnt; i++)
		printf("%d %s \n", members[i].age, members[i].str);
	return 0;

}

void quickSort(int cnt, member * members) {
	int i, j;
	for (i = 1; i < cnt; i++) {
		member member = members[i];
		for (j = i - 1; j >= 0 && member.age < members[j].age; j--)
			members[j + 1] = members[j];
		members[j + 1] = member;
	}
}
