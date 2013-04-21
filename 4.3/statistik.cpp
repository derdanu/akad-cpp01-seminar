/*
 * =====================================================================================
 *
 *       Filename:  statistik.cpp
 *
 *    Description:  Aufgabe 4.3
 *
 *        Version:  1.0
 *        Created:  18.04.2013 17:22:56
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Daniel Falkner (df), daniel.falkner@akad.de
 *   Organization:  AKAD Pinneberg
 *
 * =====================================================================================
 */



#include	<cstdlib>
#include	<iostream>
#include	<string>
#include 	<set>
#include	<iomanip>

using namespace std;

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  Buchstaben zaehlen mit multiset 
 * =====================================================================================
 */
	int
main ( int argc, char *argv[] )
{

	string text = "ichbineingaaanzlangerstringohnetieferebedeutungabermitvielenbuchstabendiemangutzaehlenundalsstatistikerfassenkannnadannvielspass";

	multiset<char> data;
	string::iterator it;
	
	for (it = text.begin(); it != text.end(); it++) {
		data.insert(*it);
	}

	int i;

	for (i=97; i<=122; i++) {

		cout << (char) i << " ist " << setw(2) << data.count(i) << " mal enthalten" << endl;
	}
	


	return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
