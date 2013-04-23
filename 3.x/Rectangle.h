
#include "Object2D.h"

/*
 * =====================================================================================
 *        Class:  Rectangle
 *  Description:  
 *
 * =====================================================================================
 */
class Rectangle: public Object2D
{
	public:
		/* ====================  LIFECYCLE     ======================================= */
		Rectangle();
		Rectangle(double width, double height);                  /* constructor */
		~Rectangle();

		double height, width;
		/* ====================  ACCESSORS     ======================================= */
		virtual double area() const;
		virtual double perimeter() const;	
		/* ====================  MUTATORS      ======================================= */

		/* ====================  OPERATORS     ======================================= */
		ostream& print(ostream& strm);

	protected:
		/* ====================  METHODS       ======================================= */

		/* ====================  DATA MEMBERS  ======================================= */

	private:
		/* ====================  METHODS       ======================================= */

		/* ====================  DATA MEMBERS  ======================================= */
	
}; /* -----  end of class Rectangle  ----- */

