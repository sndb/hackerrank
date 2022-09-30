#include <stdio.h>

void
calculate_the_maximum(int n, int k) {
	int and_max = 0, or_max = 0, xor_max = 0;
	for (int i = 1; i <= n; i++) {
		for (int j = i + 1; j <= n; j++) {
			int and = i & j, or = i | j, xor = i ^ j;
			if (and > and_max && and < k)
				and_max = and;
			if (or > or_max && or < k)
				or_max = or;
			if (xor > xor_max && xor < k)
				xor_max = xor;
		}
	}
	printf("%d\n%d\n%d\n", and_max, or_max, xor_max);
}

int
main() {
	int n, k;

	scanf("%d %d", &n, &k);
	calculate_the_maximum(n, k);

	return 0;
}
