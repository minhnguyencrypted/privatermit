#include <stdio.h>

int main() {
    int n;
    scanf ("%d",&n);
    for (int i=n; i>0; i--) {
	for (int j=i,count=-1; j<=i && j>0; j+=count) {
	    printf ("%3d",j);
	    if (j==1) count = 1;
	}
	printf ("\n");
    }
    return 0;
}
