#include <stdio.h>
#include <stdlib.h>

int
compar(const void *p, const void *q) {
	return *(int *)p - *(int *)q;
}

int
hackerlandRadioTransmitters(int *x, int n, int k) {
	qsort(x, n, sizeof(int), compar);
	int i = 0, r = 0;
	while (i < n) {
		int a = x[i];
		while (i < n && x[i] - a <= k)
			i++;
		int b = x[i - 1];
		while (i < n && x[i] - b <= k)
			i++;
		r++;
	}
	return r;
}

int
main(void) {
	int n, k;
	scanf("%d %d", &n, &k);
	int *x = malloc(sizeof(int[n]));
	for (int i = 0; i < n; i++)
		scanf("%d", x + i);
	int r = hackerlandRadioTransmitters(x, n, k);
	printf("%d\n", r);
	return 0;
}
