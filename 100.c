#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cnt(int num)
{
	if (num == 1)
		return 1;
	
	if ((num % 2) == 1) {
		num = num * 3 + 1;
		return cnt(num) + 1;
	} else {
		num /= 2;
		return cnt(num) + 1;
	}
	
}

int main()
{
	int i;
	int rcd;
	int tmp;
	int num[2];

	char input[16];

	while (scanf("%d %d", &num[0], &num[1]) != EOF) {

		printf("%d %d ", num[0], num[1]);
		
		if (num[0] > num[1]) {
			tmp = num[0];
			num[0] = num[1];
			num[1] = tmp;
		}

		rcd = 0;

		for (i = num[0]; i <= num[1]; i++) {
			tmp = cnt(i);
			if (tmp > rcd)
				rcd = tmp;
		}
		
		printf("%d\n", rcd);
	}
	return 0;
}
