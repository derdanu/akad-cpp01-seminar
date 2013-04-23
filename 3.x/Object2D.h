
#include <string>
#include <iostream>

using namespace std;


#ifndef OBJECT2D
#define OBJECT2D

/*
 *
 * =====================================================================================
 *        Class:  Object2D
 *  Description:  
 *
 * =====================================================================================
 */
class Object2D
{
	public:
		/* ====================  LIFECYCLE     ======================================= */
		Object2D();
		Object2D(string type);                             /* constructor */
		~Object2D();
		/* ====================  ACCESSORS     ======================================= */

		virtual double area() const = 0;
		virtual double perimeter() const = 0;
		string getType() const;
		/* ====================  MUTATORS      ======================================= */

		/* ====================  OPERATORS     ======================================= */
		virtual ostream& print(ostream& strm);
	protected:
		/* ====================  METHODS       ======================================= */

		/* ====================  DATA MEMBERS  ======================================= */
		string type;
	private:
		/* ====================  METHODS       ======================================= */

		/* ====================  DATA MEMBERS  ======================================= */

}; /* -----  end of class Object2D  ----- */

ostream& operator<<(ostream& aus, Object2D& o);


#endif
