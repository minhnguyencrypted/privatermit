#include <stdio.h>

int main() {
    printf ("X");
    for (int i=1; i<=10; i++) {
	printf ("%4d",i);
    }
    printf ("\n");
    for (int i=1; i<=10; i++) {
	printf ("%d",i);
	for (int j=1; j<=10; j++) {
	    printf ("%4d",i*j);
	}
	printf ("\n");
    }
    printf ("\n");
    return 0;
}
