
#include <string>

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

		virtual	const double area();
		virtual const double perimeter();

		/* ====================  MUTATORS      ======================================= */

		/* ====================  OPERATORS     ======================================= */
		ostream& print(ostream& strm);
		ostream& operator<<(ostream& aus);
	protected:
		/* ====================  METHODS       ======================================= */

		/* ====================  DATA MEMBERS  ======================================= */
		string type;
	private:
		/* ====================  METHODS       ======================================= */

		/* ====================  DATA MEMBERS  ======================================= */

}; /* -----  end of class Object2D  ----- */

#endif
