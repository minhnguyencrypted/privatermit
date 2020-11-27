#include <stdio.h>
#include <ctype.h>

int main() {
    char s[200] = "\0";
    scanf ("%[^\n]",s);
    int ltt = 0,    //Letter Count
	num = 0,    //Number Count
	pun = 0;    //Punctuation Count
    int i = 0;
    while (s[i] != '\0') {
	if (isalpha(s[i])) ltt++;
	else if (isdigit(s[i])) num++;
	    else if (s[i] != ' ') pun++;
	i++;
    }
    printf ("%d\n%d\n%d\n",ltt,num,pun);
    return 0;
}
