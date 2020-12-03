#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s[200] = "\0";
    scanf ("%[^\n]s",s);
    char *si = s;
    for (int i=0; i<strlen(s); i++) {
	if (islower(*(si+i))) *(si+i)-=32;
    }
    printf ("%s\n",s);
    return 0;
}
