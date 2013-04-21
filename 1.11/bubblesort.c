/*
 * =====================================================================================
 *
 *       Filename:  bubblesort.c
 *
 *    Description:  Aufgabe 1.11 Bubblesort in C
 *
 *        Version:  1.0
 *        Created:  15.04.2013 19:22:29
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Daniel Falkner (df), daniel.falkner@akad.de
 *   Organization:  AKAD Pinneberg
 *
 * =====================================================================================
 */


#include	<stdlib.h>
#include 	<stdio.h>


enum boolean { FALSE = 0, TRUE };
typedef enum boolean bool;/* 


 * ===  FUNCTION  ======================================================================
 *         Name:  swap
 *  Description:  Tauschen als C Funktion mit Call by Reference 
 * =====================================================================================
 */
	void
swap ( int* a, int* b)
{

	int tmp;
	
	tmp = *b;
	
	*b = *a;
	*a = tmp;

}		/* -----  end of function swap  ----- */

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  bubbleSort
 *  Description:  Bubble Sort
 * =====================================================================================
 */
	void

bubbleSort (int A[], int n)
{

	bool fertig = FALSE;
	int i;
	
	while (fertig != TRUE) {
	
		fertig = TRUE;
		for (i = 0; i < n-2; i++) {
			if (A[i] > A[i+1]) {
				swap(&A[i], &A[i+1]);
				fertig = FALSE;
			} 
		}

	} 

}		/* -----  end of function bubbleSort  ----- */
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
	int
main ( int argc, char *argv[] )
{
	
	#define ANZAHL 9
	
	int arr[] = {5, 2, 7, 3, 1, 4, 6, 8, 9};
	int i;
	for (i=0; i<ANZAHL; i++) printf("%i\n", arr[i]);

	bubbleSort(arr, ANZAHL);
	printf("Nun Bubble Sort\n");
	for (i=0; i<ANZAHL; i++) printf("%i\n", arr[i]);
	

	return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
