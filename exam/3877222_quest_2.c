/*
  RMIT University Vietnam
  Course: EEET2601 Engineering Computing 1
  Semester: 2020C
  Assignment: 2
  Author: Minh Nhat Nguyen
  ID: s3877222
  Created  date: 04/01/2021
  Acknowledgement: This question is done by me, Minh Nhat Nguyen, with or without the assistance of permitted external sources described on Canvas platform
*/
#include <stdio.h>
#include <string.h>

//String reverse function
//Recursive and IMPure function
void rstRev_imp (char *src, char *dest) {
	//Recursion termination cond.
	if (*(src + 1) == '\0') *dest = *src;
	else {
		rstRev_imp (src + 1,dest);
		*strchr(dest,'\0') = *src;		//Copy the character to the far-right character of the destination string
	}
}

int main() {
	char st[100] = "";
	char reslt[100];
	memset (reslt,'\0',sizeof(reslt));	//Fill the result string with "null" character
	scanf ("%[^\n]s",st);

	rstRev_imp (st,reslt);
	printf ("%s\n",reslt);
	return 0;
}