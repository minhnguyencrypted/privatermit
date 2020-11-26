#include <stdio.h>
#include <ctype.h>

int main() {
    char s[200] = "\0";
    scanf ("%[^\n]s",s);
    int i=0;
    while (s[i] != '\0') {
	if (islower(s[i])) {	//If current character is lowercase
	    s[i] = toupper(s[i]);
	} else s[i] = tolower(s[i]);	//If current character is UPPERCASE
	i++;
    }
    printf ("%s\n",s);
    return 0;
}
