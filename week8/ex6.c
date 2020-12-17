#include <stdio.h>
#include <string.h>

void arrprint(int *arr,int length) {	 
    //	Not fucking PURE
    //	#saveHaskell	
    if (length == 0) printf ("%d ",*arr);
    else {
	arrprint(arr,length-1);
	printf ("%d ",*(arr + length));
    }
}

int main() {
    int n = 0, a[200];
    memset (a,0,sizeof(a));
    scanf ("%d",&n);
    for (int i=0; i<n; i++) {
	scanf ("%d",&a[i]);	
    }	

    arrprint(a,n-1);
    printf ("\n");
    return 0;
}
