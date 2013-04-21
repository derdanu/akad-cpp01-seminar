/*
 * =====================================================================================
 *
 *       Filename:  sinus.cpp
 *
 *    Description:  Aufgabe 1.4
 *
 *        Version:  1.0
 *        Created:  15.04.2013 15:00:00
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Daniel Falkner (df), daniel.falkner@akad.de
 *   Organization:  AKAD Pinneberg
 *
 * =====================================================================================
 */




#include	<iostream>
#include	<cmath>

using namespace std;


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  fakultaet
 *  Description:  Berechnet die Fakultaet https://de.wikipedia.org/wiki/Fakultät_(Mathematik)
 * =====================================================================================
 */
	
unsigned long fakultaet (unsigned long x)
{
	if (x == 0) {
		x = 1;
	} else {
		x = x * fakultaet(x -1);
	}
	return x;
}		/* -----  end of function fakultaet  ----- */
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  sinus
 *  Description:  Berechnet Sinus nach Taylorreihen http://de.wikipedia.org/wiki/Taylorreihe
 * =====================================================================================
 */
	
double sinus (double x, unsigned int max)
{
	double sinus = 0.0, vorzeichen, zaehler, nenner;
	unsigned int i;

	for (i=0; i<max; i++) {

		
		vorzeichen = pow(-1.0, (double) i);
		nenner = 2 * i + 1;
		zaehler = pow(x, nenner);
		sinus += vorzeichen * (zaehler / fakultaet(nenner));

	
	}
	
	return sinus;
}		/* -----  end of function sinus  ----- */
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

	for (i=0; i<=10; i++) {

		cout << "Sinus fuer " << i << ": " << sinus(i, 10) << " <=> " << sin(i) << endl;

	}	
	return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */

