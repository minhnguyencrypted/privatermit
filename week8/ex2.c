#include <stdio.h>

int isLeap (int year) {
    if ((year % 400) == 0) return 1;
    else if ((year % 4 == 0) && (year % 100)) return 1;
	else return 0;
}

int main() {
    int year = 0;
    scanf ("%d",&year);
    if (isLeap(year)) printf ("Leap\n");
    else printf ("Not Leap\n");
    return 0;
}
