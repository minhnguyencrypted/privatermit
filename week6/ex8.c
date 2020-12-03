#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s[200] = "\0";
    scanf ("%[^\n]s",s);
    char *si = s;
    
    for (int i=0; i<strlen(s)/2; i++) {
	char st = *(si+i);
	*(si+i) = *(si+strlen(s)-i-1);
	*(si+strlen(s)-i-1) = st;
    }
    printf ("%s\n",s);
    return 0;
}
