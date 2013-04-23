/*
 * =====================================================================================
 *
 *       Filename:  Circle.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  17.04.2013 18:40:15
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Daniel Falkner (df), daniel.falkner@akad.de
 *   Organization:  AKAD Pinneberg
 *
 * =====================================================================================
 */

#include "Circle.h"
#include <cmath>

Circle::Circle(double radius) {

	type = "Circle";
	this->radius = radius;

}

const double Circle::area() {

	return 2 * M_PI * radius;
}

const double Circle::perimeter() {

	return radius * radius * M_PI ;
}	

ostream& Circle::print(ostream& strm) {
	Object2D::print(strm);
	strm << "Radius: " << radius;
	return strm;

}

