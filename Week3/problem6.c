#include <stdio.h>

int main() {
    int n;
    do {
	printf ("Input number: ");
	scanf ("%d",&n);
    } while ((n>15) || (n<1));
    for (int i=1; i<=n; i++) {
	for (int j=n,count=-1; j<=n && j>0; j+=count) {
	    if ((j<=i)&&(j>0))printf ("%d ",j);
	    else printf ("  ");
	    if (j==1) count = 1;
	}
	printf ("\n");
    }
    return 0;
}
