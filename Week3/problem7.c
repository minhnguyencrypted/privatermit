#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Map choices to 0->2
const char* CHOICES[3] = {
    "ROCK",
    "PAPER",
    "SCISSORS",
};

int main() {
    srand(time(0));
    int chce;
    while (1) {
	//Input choice
	printf ("Input your choice: ");
	scanf ("%d",&chce);
	//Exit program or ask to input number again
	if (chce == -1) break;
	if ((chce < -1) || (chce > 2)) continue;

	//Print choice
	printf ("%s\n",CHOICES[chce]);
	//Generate computer choice
	int compchce = rand() % 3;
	printf ("%s\n",CHOICES[compchce]);

	//Compare choices
	int reslt = chce - compchce;
	if ((reslt == 1) || (reslt == -2)) printf ("Won");
	else 
	    if (reslt == 0) printf ("Draw");
	    else printf ("Lost");
	printf ("\n");
    }
    printf ("End of Program. Exit now.\n");
    return 0;
}
