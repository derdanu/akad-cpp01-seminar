/*
 * =====================================================================================
 *
 *       Filename:  fakultaet.c
 *
 *    Description:  Aufgabe 1.9 Fakultaet
 *
 *        Version:  1.0
 *        Created:  15.04.2013 18:56:23
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
 *         Name:  faci
 *  Description:  Interative Berechnung
 * =====================================================================================
 */

int faci (int x)
{
	int i,j=1;

	if (x == 0) {
		x = 1;
	} else {
		for (i=1; i<=x; i++) {
			j *=i;		
		}
		x = j;
	}
	return x;
}		/* -----  end of function faci  ----- */


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  facr
 *  Description:  Rekursive Berechnung
 * =====================================================================================
 */
	

int facr (int x)
{
	if (x == 0) {
		x = 1;
	} else {
		x = x * facr(x -1);
	}
	return x;
}		/* -----  end of function facr  ----- */
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
	int
main ( int argc, char *argv[] )
{

	int i;

	for (i=0; i<10; i++) {
		printf("Fakultaet fuer %i ist rekursiv: %8i, iterativ: %8i\n", i, facr(i), faci(i));
	}	

	return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */

