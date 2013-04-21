/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  21.04.2013 07:34:25
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
#include 	"LinkedList.h"
#include	"ListException.h"
#include 	"DoublyLinkedList.h"

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

	LinkedList l;
	DoublyLinkedList dl;

	int i;
	
	for (i=1; i<=8; i++) {

		l.append(i);
	}


	try {

		l.front();

		for (i=1; i<=8; i++) {

			cout << "Get: " << l.next() << endl;
	
		}
	} catch (exception& err) {
		cout << err.what() << endl;
	}

	cout << " und von hinten " << endl;

	
	for (i=1; i<=8; i++) {

		dl.append(i);
	}

	try {
	
		dl.back();
		
		for (i=1; i<=8; i++) {

			cout << "Get: " << dl.previous() << endl;
	
		}


	} catch (exception& err) {
		cout << err.what() << endl;
	}



	return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
