/*
 * =====================================================================================
 *
 *       Filename:  randomArray.c
 *
 *    Description:  Aufgabe 1.8 Random Array in C	
 *
 *        Version:  1.0
 *        Created:  15.04.2013 18:03:10
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
#include	<limits.h>
#include <time.h>

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  randomArray
 *  Description:  
 * =====================================================================================
 */
	

double* randomArray ( unsigned int n )
{
	double *array;
	int i,r;
	time_t t;

    	time(&t);
    	srand((unsigned int)t);  

	array = (double *) malloc(sizeof(double) * n);

	for (i=0; i<n; i++) array[i] = 0;


	if (array != NULL) {

		for (i=1; i<=n; i++) {
			
			for (;;) {

				r = rand() % n;
				
				if (array[r] == 0) break;
				
			}			 
		
			array[r] = i;

		}		



	} else {
	   printf("Ohne Speicher nix los ... \n");
	   exit(EXIT_FAILURE);
	}


	return array;
}		/* -----  end of function randomArray  ----- */

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
	int
main ( int argc, char *argv[] )
{

	double *array;
	int i, size = 10;

	array = randomArray(10);

	for (i=0; i<size; i++) {
	
		printf("Array Position %i: %f\n", i, array[i]);

	}

	
	return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
