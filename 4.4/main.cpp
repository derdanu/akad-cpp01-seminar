/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description:  Aufgabe 4.4
 *
 *        Version:  1.0
 *        Created:  20.04.2013 10:48:47
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
#include 	"PolybiosChiffre.h"

using namespace std;


/* 
 *
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
	int
main ( int argc, char *argv[] )
{

	PolybiosChiffre c;
	string key = "c0kqls5mg9nzw476tbvj12yo3edif8xrauph";
	if (!c.setKey(key)) {
		cout << "Schluessel ist ungueltig" << endl;
	} else {

		c.printTable();
		string plaintext = "stuttgart";
		string ciphertext = "554151150443005541141204534100022053140500554355515451351251521111445314022443351443415124";
		cout << "Encrypting: " << plaintext << " -> " << c.encrypt(plaintext) << endl;;
		cout << "Decrypting: " <<  ciphertext << " -> " << c.decrypt(ciphertext) << endl;
		cout << "Erzeuge zufaelligen Schluessel " << endl;;
		c.randomKey();
		c.printTable();
	}


	return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
