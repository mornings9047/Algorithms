/* No.2941 크로아티아 알파벳의 개수를 세는 문제 */
#include <stdio.h>
#include <string.h>

int main() {
	char str[100];
	char * c = str;
	int cnt = 0, i = 0;

	scanf("%s", str);

	while (*c != '\0') {
		switch (*c) {
		case 'c':
			(*(c + 1) == '=') || (*(c + 1) == '-')  ? c += 2 : c++;
			break;
		case 'd':
			(*(c + 1) == '-') ? c += 2 : ((*(c + 1) == 'z' && *(c + 2) == '=') ? c += 3 : c++);
			break;
		case 'l':
			(*(c + 1) == 'j') ? c += 2 : c++;
			break;
		case 'n':
			(*(c + 1) == 'j') ? c += 2 : c++;
			break;
		case 's':
			(*(c + 1) == '=') ? c += 2 : c++;
			break;
		case 'z':
			(*(c + 1) == '=') ? c += 2 : c++;
			break;
		default:
			c++;
			break;
		}
		cnt++;
	}

	printf("%d \n", cnt);
	return 0;
}