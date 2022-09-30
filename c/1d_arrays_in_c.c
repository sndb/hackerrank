#include <stdio.h>
#include <stdlib.h>

int
main() {
	int n;
	scanf("%d\n", &n);

	int *arr = malloc(n * sizeof(*arr));
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	int sum = 0;
	for (int i = 0; i < n; i++)
		sum += arr[i];
	printf("%d\n", sum);

	free(arr);

	return 0;
}
