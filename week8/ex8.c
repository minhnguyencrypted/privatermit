#include <stdio.h>
#include <string.h>

//  IMPURE function
//  #saveHaskell
void toString_imp (char *dest, int num) {
    if (num/10 == 0) *dest = '0' + num;
    else {
	toString_imp (dest,num/10);
	*strchr(dest,'\0') = '0' + num%10;
    }
}

int main() {
    char numst[200];
    memset (numst,'\0',sizeof(numst));
    int n = 0;
    scanf ("%d",&n);

    toString_imp(numst,n);
    printf ("%s\n",numst);
    return 0;
}
