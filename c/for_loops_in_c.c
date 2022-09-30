#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a, b;
    scanf("%d\n%d", &a, &b);

    for (int i = a; i <= b; i++) {
	    char *s;
	    if (i == 1)
		    s = "one";
	    else if (i == 2)
		    s = "two";
	    else if (i == 3)
		    s = "three";
	    else if (i == 4)
		    s = "four";
	    else if (i == 5)
		    s = "five";
	    else if (i == 6)
		    s = "six";
	    else if (i == 7)
		    s = "seven";
	    else if (i == 8)
		    s = "eight";
	    else if (i == 9)
		    s = "nine";
	    else if (i % 2 == 0)
		    s = "even";
	    else
		    s = "odd";
	    printf("%s\n", s);
    }

    return 0;
}
