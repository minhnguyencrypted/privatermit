#include <stdio.h>
#include <string.h>

int main() {
    char str[200] = "\0";
    scanf ("%[^\n]s",str);
    
    for (int i=0; i<strlen(str)/2; i++) {
	str[i] += str[strlen(str)-i-1];
	str[strlen(str)-i-1] = str[i] - str[strlen(str) - i-1];
	str[i] -= str[strlen(str)-i-1];
    }
    printf ("%s\n",str);
    return 0;
}
