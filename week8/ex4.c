#include <stdio.h>

void printdigit(int pnum) {
    if (pnum/10 == 0) printf ("%d ",pnum);
    else {
	printdigit (pnum/10);
	printf ("%d ",pnum % 10);
    }
}

int main() {
    int n = 0;
    scanf ("%d",&n);
    printdigit(n);
    printf ("\n");
    return 0;
}
