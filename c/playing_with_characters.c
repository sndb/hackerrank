#include <stdio.h>

#define MAX_LEN 100

int
main() {
	char ch;
	char s[MAX_LEN];
	char sen[MAX_LEN];
	scanf("%c%s\n%[^\n]s", &ch, s, sen);
	printf("%c\n%s\n%s\n", ch, s, sen);
	return 0;
}
