/*
 * =====================================================================================
 *
 *       Filename:  Object2D.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  17.04.2013 18:57:35
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Daniel Falkner (df), daniel.falkner@akad.de
 *   Organization:  AKAD Pinneberg
 *
 * =====================================================================================
 */

#include "Object2D.h"

Object2D::Object2D() {

}

Object2D::Object2D(string type) {


}

Object2D::~Object2D() {

}

string Object2D::getType() const {

	return type;

}

ostream& Object2D::print(ostream& strm) {

	strm << "Typ: " << type << " ";
	return strm;

}

ostream& operator<<(ostream& strm, Object2D& o) {

	return o.print(strm);

}
