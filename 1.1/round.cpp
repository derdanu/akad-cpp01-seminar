/*
 * =====================================================================================
 *
 *       Filename:  round.cpp
 *
 *    Description:  Aufgabe 1.1  
 *
 *        Version:  1.0
 *        Created:  14.04.2013 17:32:44
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Daniel Falkner (df), daniel.falkner@akad.de
 *   Organization:  AKAD Pinneberg
 *
 * =====================================================================================
 */
#include 	<iostream>
#include 	<cmath>
#include 	<iomanip>

using namespace std;

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  round
 *  Description: Runden mit Typkonvertierungen auf s Stellen. 
 * =====================================================================================
 */

double round ( double x, short s )
{
	if (s >= 0 && s <= 10) {
	
		x = (long) (x * pow(10.f, s) + 0.5);
		x /= pow(10.f, s);
	}
	return x;
}		/* -----  end of function round  ----- */

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
	double wert = 234.238239912758334;

	
	//Damit auch alle Nachkommastellen angezeigt werden.
	cout.precision(15);
	
   	cout << "Runden von: " << wert << endl;

	for (i=0;i <=10;i++) {
		
		cout << "auf " << setw(2) << i << " Stellen nach Komma: " << round(wert, i) << endl;
	}


	return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */

