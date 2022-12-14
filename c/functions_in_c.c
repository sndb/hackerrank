#include <stdio.h>

int
max_of_four(int a, int b, int c, int d) {
	int max     = a;
	int rest[3] = {b, c, d};
	for (int i = 0; i < 3; i++)
		if (rest[i] > max)
			max = rest[i];
	return max;
}

int
main() {
	int a, b, c, d;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	int ans = max_of_four(a, b, c, d);
	printf("%d", ans);
	return 0;
}
