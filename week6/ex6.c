#include <stdio.h>

int main() {
    char s[200] = "\0";
    scanf ("%[^\n]s",s);
   
    char *si = s;
    int sl = 0;

    while (*(si+sl) != '\0') {
	sl++;	
    }
    printf ("%d\n",sl);
   
    return 0;
}
