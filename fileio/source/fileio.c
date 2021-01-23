#include <stdio.h>
#include <string.h>
#include <ctype.h>

int fcopy(char const *finname, char const *foutname);
int fcopyln(char const *finname, char const *foutname);
int fwordcount(char const *finname); 
int fnewlncount(char const *finname);

int fcopy (char const *finname, char const *foutname) {
    //Open files
    FILE *fin = fopen(finname,"r");
    FILE *fout = fopen(foutname,"w");
    
    //File(s) not found
    if (fin == NULL) return 0;
    
    //File(s) found
    for (int i=fgetc(fin); i!=EOF; i=fgetc(fin)) fputc (i,fout);
    return 1;
}

int fcopyln (char const *finname, char const *foutname) {
    //Open files
    FILE *fin = fopen(finname,"r");
    FILE *fout = fopen(foutname,"w");
    
    //File(s) not found
    if (fin == NULL) return 0;
    
    //File(s) found
    int lncount = 1;
    int i = fgetc(fin);
    if (i != EOF) fputs("1. ",fout);
    while (!feof(fin)) {
	if (i == '\n') {
	    fputc(i,fout);
	    i = fgetc(fin);
	    if (i != EOF) fprintf (fout,"%d. ",++lncount);
	}
	else {
	    fputc(i,fout);
	    i = fgetc(fin);
	}
    }
    return 1;
}

int fwordcount(char const *finname) {
    //Open files
    FILE *fin = fopen(finname,"r");
    
    //File(s) not found
    if (fin == NULL) return -1;
      
    //Word length
    int wlength = 0;
    int wcount = 0;
    int i=fgetc(fin);
    while (!feof(fin)) {
	if (isalnum(i)) wlength++;
	else if (wlength > 0) { 
	    wcount++;
	    wlength = 0;
	}
	i=fgetc(fin);		
    }
    
    return wcount;
}

int fnewlncount(char const *finname) {
    //Open files
    FILE *fin = fopen(finname,"r");
    
    //File(s) not found
    if (fin == NULL) return -1;
  
    //Newline counting
    int nwlncount = 0; 
    int i=fgetc(fin);
    while (!feof(fin)) {
	if (i == '\n') nwlncount++;
	i=fgetc(fin);
    }
    
    return nwlncount;
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
    
    //File copying
    int cpreslt = fcopy(inFileName,outFileName);
    if (!cpreslt) printf ("Input File not found\n");

    //File copying, showing line number
    int cplnreslt = fcopyln(inFileName,outFileName);
    if (!cplnreslt) printf ("Input File not found\n");

    //File word counting
    int fwcount = fwordcount(inFileName);
    if (fwcount == -1) printf ("Input File not found\n");
    else printf ("Word count: %d\n",fwcount);
    
    //File newline counting
    int flncount = fnewlncount(inFileName);
    if (flncount == -1) printf ("Input File not found\n");
    else printf ("Newline count: %d\n",flncount);

    return 0;
}
