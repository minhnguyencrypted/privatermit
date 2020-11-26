#include <stdio.h>

int main() {
    char ch = '\0';
    scanf ("%c",&ch);
    if (('A'<=ch) && ('Z'>=ch)) {
	printf ("UPPERCASE");
    } else if (('a'<=ch) && ('z'>=ch)) {
	    printf ("lowercase");
	} else {
		printf ("Neither of 'em");
	    }
    printf ("\n");
    return 0;
}
