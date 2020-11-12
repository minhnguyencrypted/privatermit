#include <stdio.h>

int main() {
    const char START = '!';
    const char END = '~';
    int charcount = 1;
    for (char i = START;i<=END;i++) {
	printf ("%c ",i);
	charcount++;
	if (charcount == 10) {
	    printf ("\n");
	    charcount = 1;
	}
    }
    printf ("\nEnd of Program. Exit now.\n");
    return 0;
}
