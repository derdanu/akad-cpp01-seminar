/*
 * =====================================================================================
 *
 *       Filename:  muenzen.cpp
 *
 *    Description:  Aufgabe 1.3
 *
 *        Version:  1.0
 *        Created:  15.04.2013 14:38:36
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
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
	int
main ( int argc, char *argv[] )
{
	int kaufpreis, bezahlt = 0, reture, tmp, i;
	int muenzen[] = {200, 100, 50, 20, 10, 5, 2, 1};
	
	cout << "Bitte Kaufpreis in Cent eingeben: ";
	cin >> kaufpreis;
	
	while (bezahlt <= kaufpreis) {  
	
		cout << "Bitte Zahlung eingeben: ";
		cin >> tmp;
		bezahlt += tmp;
	}

	if (bezahlt > kaufpreis) {

		reture = bezahlt - kaufpreis;

		cout << "Ihr Wechselgeld betraegt: " << reture << endl;
		
		while (reture != 0) {

			for (i=0; sizeof(muenzen); i++) {
	
				if (reture >= muenzen[i]) {
					cout << muenzen[i] << " ";
					reture -= muenzen[i];
					break;
				} 		
			
			}
			
		}
			
		cout << "" << endl;

	}

	cout << "Vielen Dank fuer Ihren Einkauf" << endl;

	return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
