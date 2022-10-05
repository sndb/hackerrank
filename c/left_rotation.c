#include <stdlib.h>
#include <string.h>

int *
rotateLeft(int d, int arr_count, int *arr, int *result_count) {
	int *r = malloc(sizeof(int[arr_count]));
	memcpy(r, arr + d, sizeof(int[arr_count - d]));
	memcpy(r + arr_count - d, arr, sizeof(int[d]));
	*result_count = arr_count;
	return r;
}
