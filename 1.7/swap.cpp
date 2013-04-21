/*
 * =====================================================================================
 *
 *       Filename:  swap.cpp
 *
 *    Description:  Aufgabe 1.7
 *
 *        Version:  1.0
 *        Created:  15.04.2013 17:52:35
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Daniel Falkner (df), daniel.falkner@akad.de
 *   Organization:  AKAD Pinneberg
 *
 * =====================================================================================
 */



#include	<iostream>

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  swap
 *  Description:  
 * =====================================================================================
 */
	void
swap ( int& a, int& b)
{

	int tmp;
	
	tmp = b;
	
	b = a;
	a = tmp;

}		/* -----  end of function swap  ----- */
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
	int
main ( int argc, char *argv[] )
{

	int a=5,b=9;
	
	std::cout << "Tausche " << a << " und " << b << std::endl;
	
	swap(a, b);

	std::cout << "a: " << a << " b: " << b << std::endl;
	
	return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */

