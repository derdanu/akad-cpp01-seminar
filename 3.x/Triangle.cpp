/*
 * =====================================================================================
 *
 *       Filename:  Triangle.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  17.04.2013 18:44:31
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Daniel Falkner (df), daniel.falkner@akad.de
 *   Organization:  AKAD Pinneberg
 *
 * =====================================================================================
 */

#include "Triangle.h"
#include <cmath>

Triangle::Triangle(double length) {

	type = "Triangle";
	this->length = length;

}

double Triangle::area() const {

	return (sqrt(3) / 4) * length * length;

}
	

double Triangle::perimeter() const {

	return 3 * length;
	
}

ostream& Triangle::print(ostream& strm) {
	Object2D::print(strm);
	strm << "Length: " << length;
	return strm;

}

