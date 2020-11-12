#include <stdio.h>

int main() {
    int ncount = 0;
    int n;
    int sum = 0;
    while (1) {
	printf ("Input you number: ");
	scanf ("%d",&n);
	if (n>=0) {
	    ++ncount;
	    sum+=n;
	} else break;
    }
    printf ("Total: %d \nNumber count: %d\n",sum,ncount);
    printf ("End of Program. Exit now\n");
    return 0;
}
