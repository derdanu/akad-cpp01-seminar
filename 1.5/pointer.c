/*
 * =====================================================================================
 *
 *       Filename:  pointer.c
 *
 *    Description:  Aufgabe 1.5 in C diesmal. Pointeruebungen
 *
 *        Version:  1.0
 *        Created:  15.04.2013 16:19:27
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
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
	int
main ( int argc, char *argv[] )
{

	double x,y,z, sum;
	double *px, *py, *pz;

	x = 32.5;
	y = 17.4;
	z = 2.33;

	px = &x;
	py = &y;
	pz = &z;

	printf("Die Ausgabe Speicheradresse:Wert) \n");
	printf("x %p:%f, y %p:%f, z %p:%f\n", (void *) px, *px, (void *) py, *py, (void *) pz, *pz);

	sum = x + y + z;
	printf("Direkte Summe: %f\n", sum);
	
	sum = *px + *py + *pz;
	printf("Pointer Summe: %f\n", sum);
	
	void *apx, *apy, *apz;
	
	apx = &x;
	apy = &y;
	apz = &z;

	sum =  *(double *) apx + *(double *) apy + *(double *) apz;

	printf("Anonyme Pointer Summe: %f\n", sum);	
	

	return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
