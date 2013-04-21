/*
 * =====================================================================================
 *
 *       Filename:  Rectangle.cpp
 *
 *    Description:  Aufgabe 3.2
 *
 *        Version:  1.0
 *        Created:  17.04.2013 18:33:45
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Daniel Falkner (df), daniel.falkner@akad.de
 *   Organization:  AKAD Pinneberg
 *
 * =====================================================================================
 */


#include "Rectangle.h"

Rectangle::Rectangle() {

}
Rectangle::Rectangle(double width, double height) {

	type = "Rectangle";
	this->width = width;
	this->height = height;
}

Rectangle::~Rectangle() {

}

const double Rectangle::area() {

	return width * height;

}

const double Rectangle::perimeter() {

	return 2 * width + 2 * height;

}
