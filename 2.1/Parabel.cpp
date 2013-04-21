/*
 * =====================================================================================
 *
 *       Filename:  Parabel.cpp
 *
 *    Description:  Aufgabe 2.1 Klassen
 *
 *        Version:  1.0
 *        Created:  16.04.2013 18:37:35
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Daniel Falkner (df), daniel.falkner@akad.de
 *   Organization:  AKAD Pinneberg
 *
 * =====================================================================================
 */

#include	"Parabel.h"
#include 	<cmath>

Parabel::Parabel () { 
}

Parabel::Parabel (double a, double b, double c) {
	this->a = a;
	this->b = b;
	this->c = c;
}

double Parabel::getA() {
	return a;
}

double Parabel::getB() {
	return b;
}

double Parabel::getC() {
	return c;
}	

void Parabel::setA(double a) {
	this->a = a;
}

void Parabel::setB(double b) {
	this->b = b;
}

void Parabel::setC(double c) {
	this->c = c;
}

double Parabel::operatorfunc(double x) {
	double erg;

	erg = a * pow(x, 2) - b * x + c;
	return erg;	
}

int Parabel::nullstellen(double& x1, double& x2) {
	int i;
	double d;

	d = pow(b,2) - 4 * a * c;

	if (d < 0) {
		i = 0;
	} else if (d == 0) {
		i = 1;
		x1 = -1 * (b / 2 * a);
	} else {
		i = 2;
		x1 = (-1 * b + sqrt(d)) / (2 * a);
		x2 = (-1 * b - sqrt(d)) / (2 * a); 
	}
			
	return i;
}




