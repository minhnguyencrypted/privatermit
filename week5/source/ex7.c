#include <stdio.h>
#include <string.h>
#include <stddef.h>

int main() {
    char s[5][200]; 
    char fname[200] = "\0";
    for (int i=0; i<5; i++) {
	char fname[200];	
	fgets(fname,200,stdin);
	fname[strlen(fname)-1] = '\0';
	strcpy (s[i],fname);
    }
    printf ("\n");

    //Bubble sort stuff
    for (int i=0; i<5; i++) {
	for (int j=i+1; j<5; j++) {
	    if (strcmp(s[i],s[j]) > 0) {
		char swstr[200] = "\0";	    //Non swap variable? I still can't figure that out
		strcpy (swstr,s[i]);
		strcpy (s[i],s[j]);
		strcpy (s[j],swstr);
	    }
	}
    }
    for (int i=0; i<5; i++) {
	printf ("%s\n",s[i]);
    }
    return 0;
}
