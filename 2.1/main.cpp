/*
 * =====================================================================================
 *
 *       Filename:  app.cpp
 *
 *    Description:  Aufgabe 2.1 Hauptprogramm
 *
 *        Version:  1.0
 *        Created:  16.04.2013 18:46:36
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Daniel Falkner (df), daniel.falkner@akad.de
 *   Organization:  AKAD Pinneberg
 *
 * =====================================================================================
 */



#include	<iostream>
#include	"Parabel.h"
#include 	<iomanip>

using namespace std;

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
	int
main ( int argc, char *argv[] )
{

	Parabel p;
	double i, x1, x2;
	int x;

	p.setA(2);
	p.setB(4);
	p.setC(10);
	
	cout << "A: " << p.getA() << " B: " << p.getB() << " C: " << p.getC() << endl;
	
	for (i=-2; i<=2; i++) {

		cout << "Funktionswert fuer " << setw(2) << i << "  : " << setw(4)  << p(i) << endl;
	}	

	x = p.nullstellen(x1, x2);
	if (x == 0) {
		cout << "Keine Nullstellen" << endl;
	} else {
		cout << x << " Nullstelle(n) x1: " << x1 << " x2: " << x2 << endl;
	}
		
	

	return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
