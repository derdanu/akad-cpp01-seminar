/*
 * =====================================================================================
 *
 *       Filename:  wurzel.cpp
 *
 *    Description:  Aufgabe 1.2
 *
 *        Version:  1.0
 *        Created:  15.04.2013 14:24:18
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Daniel Falkner (df), daniel.falkner@akad.de
 *   Organization:  AKAD Pinneberg
 *
 * =====================================================================================
 */

#include	<iostream>
#include 	<cmath>


using namespace std;

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  wurzel
 *  Description:  Quadratwurzel berechnen 
 * =====================================================================================
 */

double wurzel (double x)
{

	double verbesserung, w_alt, w = 1.0;
	
	do {

		w_alt = w;
		w = (w + x/w)/2;
		verbesserung = w_alt - w;			
			
		if (verbesserung < 0) verbesserung -= verbesserung;


	} while (abs(w-w_alt) > 0.000001);


	return w;
}		/* -----  end of function wurzel  ----- */
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
	
	for (i=1; i <= 10; i++) {

		cout << "Die Wurzel von " << i << " lautet: " << wurzel((double) i) << endl;

	}


	return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */

