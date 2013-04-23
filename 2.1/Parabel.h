/*
 * =====================================================================================
 *
 *       Filename:  Parabel.h
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




/*
 * =====================================================================================
 *        Class:  Parabel
 *  Description:  
 *
 * =====================================================================================
 */
class Parabel
{
	public:
		/* ====================  LIFECYCLE     ======================================= */
		Parabel ();                             /* constructor */
		Parabel (double a, double b, double c);
		/* ====================  ACCESSORS     ======================================= */
		double getA();
		double getB();
		double getC();
		/* ====================  MUTATORS      ======================================= */
		void setA(double a);
		void setB(double b);
		void setC(double c);
		/* ====================  OPERATORS     ======================================= */
		double operator()(double x) const;
		int nullstellen(double& x1, double& x2);
	protected:
		/* ====================  METHODS       ======================================= */

		/* ====================  DATA MEMBERS  ======================================= */

	private:
		/* ====================  METHODS       ======================================= */

		/* ====================  DATA MEMBERS  ======================================= */
		double a, b, c;

}; /* -----  end of class Parabel  ----- */



