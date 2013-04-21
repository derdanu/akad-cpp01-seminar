/*
 * =====================================================================================
 *
 *       Filename:  PolybiosChiffre.cpp
 *
 *    Description:  Aufgabe 4.4
 *
 *        Version:  1.0
 *        Created:  20.04.2013 10:46:16
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Daniel Falkner (df), daniel.falkner@akad.de
 *   Organization:  AKAD Pinneberg
 *
 * =====================================================================================
 */

#include "PolybiosChiffre.h"
#include <string>
#include <iostream>
#include <sstream>
#include <time.h>   


using namespace std;

PolybiosChiffre::PolybiosChiffre() {


}

bool PolybiosChiffre::setKey(const string& key) {

	if (key.length() != 36) return false;

	string::iterator iter;

	string k = key;
	int i,j=-1; 

	for (iter = k.begin(),i=0; iter != k.end(); iter++,i++) {
	
		if (i % 6 == 0) {
			j++;
		}

		quadrat[j][i % 6] = *iter;
		
	}

	return true;
}

string PolybiosChiffre::encrypt(const string& plain_text) {

	string::iterator iter;

	string o,t = plain_text;
	int i,j;

	for (iter = t.begin(); iter != t.end(); iter++) {

		for (i=0; i<6; i++) {
			for (j=0; j<6; j++) {
			
				if (quadrat[i][j] == *iter) {

					stringstream ss;
					ss << i << j;
					o.append(ss.str());
				}			

			}
		}	

	}

	return o;

}

string PolybiosChiffre::decrypt(const string& cipher_text) {

	string o,t = cipher_text;
	unsigned int i,j=0;

	for (i=0; i < t.size(); i++) {
		
		if (j % 2 == 0) {

			char *a = new char(t[i]);	
			char *b = new char(t[i+1]);
			int y = atoi(a);
			int z = atoi(b);
			free(a);
			free(b);
			
			stringstream ss;
			ss << quadrat[y][z];
			o.append(ss.str());

		}
		j++;
	}	
	
	return o;

}


void PolybiosChiffre::printTable() {

	int i,j;

	// Header
	cout << "    ";
	for (i=0; i<6; i++) {
		cout << i << " ";
	}
	cout << endl;

	// Daten
	for (i=0; i<6; i++) {
		cout << i << " | ";
		for (j=0; j<6; j++) {
	
			cout << quadrat[i][j] << " ";
		
		}
		
		cout << endl;
	
	}

}

void PolybiosChiffre::randomKey() {

	srand (time(NULL));
	
	int i,j,r;


	for (i=0; i<6; i++) {
		for (j=0; j<6; j++) {

			r = rand() % 25 + 97;
			// Todo, Prüfen ob Wert schon vorhanden. 0-9 miteinbeziehen.		
			quadrat[i][j] =  static_cast<char>(r);

		
		}
	
	}


}
