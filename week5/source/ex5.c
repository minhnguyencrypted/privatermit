#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char s[200] = "\0";
    scanf ("%[^\n]",s);

    char *tkn = NULL;
    tkn = strtok (s," ");
    int wcount = 0;
    while (tkn != NULL) {
	wcount++;
    	tkn = strtok (NULL," ");
    }
    printf ("%d\n",wcount);
    return 0;
}
