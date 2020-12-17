#include <stdio.h>

int mod (int divd, int divr) {
    return divd - (divd/divr)*divr;
}

int main() {
    int a,b;
    a=b=0;
    scanf ("%d%d",&a,&b);
    printf ("%d\n",mod(a,b));
    return 0;
}
