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

const double Triangle::area() {

	return (sqrt(3) / 4) * length * length;

}
	

const double Triangle::perimeter() {

	return 3 * length;
	
}
