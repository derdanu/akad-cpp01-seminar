/*
 * =====================================================================================
 *
 *       Filename:  search.c
 *
 *    Description:  Aufgabe 1.6 
 *
 *        Version:  1.0
 *        Created:  15.04.2013 17:33:30
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Daniel Falkner (df), daniel.falkner@akad.de
 *   Organization:  AKAD Pinneberg
 *
 * =====================================================================================
 */


#include	<stdlib.h>
#include	<stdio.h>



/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  search
 *  Description:  Sucht innerhalb eines String nach einem String und gibt den Wert zurück.
 *  		Besser strstr() verwenden. 
 * =====================================================================================
 */
	
int search ( char* s, int len_s, char* p, int len_p )
{
	int i,j, pos;

	for (i=0; i<len_s; i++) {

		if (s[i] == p[0]) {

			pos = i + 1;

			for (j=1; j < len_p; j++) {
				
				if (!(s[i+j] == p[j])) {

					pos = -1;
					break;
				}

			}
			if (pos != -1) break; 	
		}
		
		pos = -1;
	}

	return pos;
}		/* -----  end of function search  ----- */



/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
	int
main ( int argc, char *argv[] )
{

	int pos;
	pos = search("Tablet", 6, "ab", 2);
	
	printf("Die Position lautet: %i", pos);

	return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
