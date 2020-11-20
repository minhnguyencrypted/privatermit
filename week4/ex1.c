#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main() {
    int array[10];
    srand(time(0));
    for (int i=0; i<10; i++) {
	array[i] = rand() % 51 + 50;
	printf ("%d ",array[i]);
    }
    
    printf ("\n");
    for (int i=9; i>=0; i--) {
	printf ("%d ",array[i]);
    }
    printf ("\n");
    
    int cnt = 0;
    for (int i=0; i<10; i++) {
	if (array[i] > 80) {
	    printf ("%d ",array[i]);
	    cnt++;
	}
    }
    printf ("Count: %d\n",cnt);
    int min = 0; 
    for (int i=0; i<10; i++) {
	if (array[i] < array[min]) min = i;
    }
    printf ("%d\n",array[min]);

    for (int i=0; i<10; i++) {
	for (int j=i+1; j<10; j++) {
	    //If former array element is greater than the latter, swap their position
	    if (array[j] < array[i]) {
		array[i] += array[j];
		array[j] = array[i] - array[j];
		array[i] -= array[j];
	    }
	}
    }
    for (int i=0; i<10; i++) {
	printf ("%d ",array[i]);
    }
    printf ("\n");
    return 0;
}
