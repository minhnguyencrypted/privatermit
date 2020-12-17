#include <stdio.h>

int digitsum(int num) {
    if (num/10 == 0) return num;
    else return (num % 10) + digitsum(num/10);
}

int main() {
    int n = 0;
    scanf ("%d",&n);
    printf ("%d\n",digitsum(n));
    return 0;
}
