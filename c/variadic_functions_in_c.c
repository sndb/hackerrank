#include <stdarg.h>

int
sum(int count, ...) {
	va_list ap;
	int     r = 0;
	va_start(ap, count);
	for (int i = 0; i < count; i++)
		r += va_arg(ap, int);
	va_end(ap);
	return r;
}

int
min(int count, ...) {
	va_list ap;
	va_start(ap, count);
	int r = va_arg(ap, int);
	for (int i = 1; i < count; i++) {
		int x = va_arg(ap, int);
		if (x < r)
			r = x;
	}
	va_end(ap);
	return r;
}

int
max(int count, ...) {
	va_list ap;
	va_start(ap, count);
	int r = va_arg(ap, int);
	for (int i = 1; i < count; i++) {
		int x = va_arg(ap, int);
		if (x > r)
			r = x;
	}
	va_end(ap);
	return r;
}
