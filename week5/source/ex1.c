#include <stdio.h>

int main() {
    char s[200] = "\0";
    scanf ("%[^\n]s",s);
    int i=0;
    while (s[i] != '\0') {
	i++;
    }
    printf ("%d\n",i);
    return 0;
}
