/*
 * =====================================================================================
 *
 *       Filename:  ggt.cpp
 *
 *    Description:  Aufgabe 1.10 GGT nach Euklid 
 *
 *        Version:  1.0
 *        Created:  15.04.2013 19:10:39
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Daniel Falkner (df), daniel.falkner@akad.de
 *   Organization:  AKAD Pinneberg
 *
 * =====================================================================================
 */


#include	<iostream>

using namespace std;
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  gcd
 *  Description:  Groesster Gemeinsamer Teiler nach Euklid Rekursiv
 * =====================================================================================
 */
	

int gcd (int a, int b)
{
	if (b == 0) {
		return a;
	} else {
		return gcd(b, a % b);
	}

}		/* -----  end of function gcd  ----- */
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
	int
main ( int argc, char *argv[] )
{
	printf ( "GGT von 21033 und 56589 = %i\n", gcd(21033, 56589));
	return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
