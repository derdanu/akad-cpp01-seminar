/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  17.04.2013 18:46:24
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

#include 	"Object2D.h"
#include 	"Rectangle.h"
#include	"Circle.h"
#include	"Triangle.h"

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

	int i;

	Object2D* o[5];

	o[0] = new Circle(500);
	o[1] = new Triangle(400);
	o[2] = new Rectangle(600, 400);
	o[3] = new Circle(350);
	o[4] = new Rectangle(100, 500);

 
	cout << "Lets get Ready to rumble..." << endl;

	for (i=0; i<5; i++) {

		cout << "i: " << i << " " << *o[i] << " Area: " << o[i]->area() << " Perimeter: " << o[i]->perimeter() << endl;

	}

	return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
