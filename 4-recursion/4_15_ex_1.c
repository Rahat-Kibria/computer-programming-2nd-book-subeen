// 1 + 2 + 3 + ... + n
#include <stdio.h>

int f_calls = 0;

int seriesSum(int n)
{
	f_calls = f_calls + 1;
	if (n == 0) {
		return 0;
	}
	return n + seriesSum(n - 1);
}

int main()
{
	int n;
	scanf_s("%d", &n);

	printf("Sum of series 1 to %d is: %d\n", n, seriesSum(n));
	printf("Number of function calls: %d\n", f_calls);

	return 0;
}
