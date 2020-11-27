#include <stdio.h>
#include <string.h>
#include <stddef.h>

int main() {
    char s[200] = "\0";
    char fname[200] = "\0";
    for (int i=0; i<5; i++) {
	fgets(s,200,stdin);
	s[strlen(s)-1] = '\0';
	char *tkn = strtok(s," ");
	memmove (fname+strlen(fname),tkn,strlen(tkn));
	strcat (fname," ");
    }
    printf ("%s\n",fname);
    return 0;
}
