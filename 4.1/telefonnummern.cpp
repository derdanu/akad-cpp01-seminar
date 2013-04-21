/*
 * =====================================================================================
 *
 *       Filename:  telefonnummern.cpp
 *
 *    Description:  Aufgabe 4.1 Implementation mit stl map
 *
 *        Version:  1.0
 *        Created:  17.04.2013 20:40:05
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Daniel Falkner (df), daniel.falkner@akad.de
 *   Organization:  AKAD Pinneberg
 *
 * =====================================================================================
 */


#include	<cstdlib>
#include	<map>
#include	<string>
#include 	<iostream>
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

	map<string, string> tel;

	tel["Heinz"] = "0170/120377";
	tel["Martin"] = "0176/55554444";
	tel["Claudia"] = "0173/6198014";
	tel["Andreas"] = "0711/52231";
	tel["Sabine"] = "089/19223211";
	tel["Anja"] = "01723334123";

	map<string, string>::iterator iter;

	for (iter=tel.begin(); iter!=tel.end(); iter++) {
	
		cout << setw(12) << iter->first << " - " << iter->second << endl;
	
	}


	string namen[2];
	
	namen[0] = "Anja";
	namen[1] = "Thomas";

	int i;
	for (i=0; i<2; i++) {
	
		cout << "Suche nach " << setw(12) << namen[i] << " ... ";
	
		iter = tel.find(namen[i]);

		if (iter == tel.end()) {
			cout << "Keine Rufnummer gefunden" << endl;
		} else {
			cout << iter->second << endl;
		}

	}

	return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
