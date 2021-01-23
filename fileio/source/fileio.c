#include <stdio.h>
#include <string.h>

int fcopy (char const *finname, char const *foutname);
int fcopyln (char const *finname, char const *foutname);

int fcopy (char const *finname, char const *foutname) {
    //Open files
    FILE *fin = fopen(finname,"r");
    FILE *fout = fopen(foutname,"w");
    
    //File(s) not found
    if ((fin == NULL) || (fout == NULL)) return 0;
    
    //File(s) found
    for (int i=fgetc(fin); i!=EOF; i=fgetc(fin)) fputc (i,fout);
    return 1;
}

int fcopyln (char const *finname, char const *foutname) {
    //Open files
    FILE *fin = fopen(finname,"r");
    FILE *fout = fopen(foutname,"w");
    
    //File(s) not found
    if ((fin == NULL) || (fout == NULL)) return 0;
    
    //File(s) found
    int lncount = 2;
    fputs("1. ",fout);
    for (int i=fgetc(fin); i!=EOF; i=fgetc(fin)) { 
	fputc (i,fout);
	if ((i == (int)'\n') && (fgetc(fin) != EOF)) {
	    fprintf (fout,"%d. ",lncount);
	    lncount++;
	}
    }
    return 1;
}

int main(int argc, char *argv[]) {
    char inFileName[200] = "\0";
    char outFileName[200] = "\0";
    if (argc == 1) {	
	fgets(inFileName,200,stdin);
	*strchr(inFileName,'\n') = '\0';
	fgets(outFileName,200,stdin);
	*strchr(outFileName,'\n') = '\0';
    }
    else {
	strcpy (inFileName,argv[1]);
	strcpy (outFileName,argv[2]);
    }

/*
    //Test file name
    printf ("%s\n%s\n",inFileName,outFileName);
*/

/*
    //File not found
    if (!(fcopy(inFileName,outFileName))) printf ("Not Found\n");
*/
    
    //File copy with line counter
    if (!(fcopyln(inFileName,outFileName))) printf ("Not Found\n");

    return 0;
}
