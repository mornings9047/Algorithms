/* No.15596 함수를 구현해 봅시다. */
#include <stdio.h>

long long sum(int *, int);

int main() {
	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
	printf("%d \n", sum(a, 10));
	return 0;
}

long long sum(int * a, int n) {
	long long ans = 0;
	for (int i = 0; i < n; i++)
		ans += *(a + i);
	return ans;
}
