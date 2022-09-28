#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int
compar(const void *p1, const void *p2) {
	char *s = *((char **)p1);
	char *t = *((char **)p2);
	return strcmp(s, t);
}

int
next_permutation(int n, char **s) {
	int tgt = n, max;
	for (int i = n - 1; i > 0; i--) {
		if (strcmp(s[i - 1], s[i]) < 0) {
			tgt = i - 1;
			break;
		}
	}
	if (tgt == n)
		return 0;

	for (int i = n - 1; i > tgt; i--) {
		if (strcmp(s[tgt], s[i]) < 0) {
			max = i;
			break;
		}
	}
	char *tmp = s[max];
	s[max]    = s[tgt];
	s[tgt]    = tmp;

	qsort(s + tgt + 1, n - tgt - 1, sizeof(char *), compar);
	return 1;
}

int
main() {
	char **s;
	int    n;
	scanf("%d", &n);
	s = calloc(n, sizeof(char *));
	for (int i = 0; i < n; i++) {
		s[i] = calloc(11, sizeof(char));
		scanf("%s", s[i]);
	}
	do {
		for (int i = 0; i < n; i++)
			printf("%s%c", s[i], i == n - 1 ? '\n' : ' ');
	} while (next_permutation(n, s));
	for (int i = 0; i < n; i++)
		free(s[i]);
	free(s);
	return 0;
}
