#include <stdio.h>

int main() {
    char array[14] = "RMITuniversity";
    for (int i=1; i<14; i++) {
	int inspos = i;	    //Insert position
	while (
	    (*(array + inspos - 1) > array[i])    //Finding the largest element less than and prior to the current element
	    && (inspos>0)   //Segfault prevention
	) inspos--; 
	if (inspos != i) {  //If current element is not in sorted order, perform insertion
	    for (int j=inspos; j<i; j++) {  //Insert and Shift elements to the right	 
		array[i] += array[j];
		array[j] = array[i] - array[j];
		array[i] -= array[j];
	    }
	}
    }
    printf ("%s\n",array);
    return 0;
}
