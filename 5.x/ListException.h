
/*
 * =====================================================================================
 *        Class:  ListException
 *  Description:  Aufgabe 5.4
 *
 * =====================================================================================
 */

#include <exception>
using namespace std;

class ListException: public exception 
{
	public:
		ListException() throw() {};
		virtual ~ListException() throw() {};
		virtual const char* what() const throw()
		{
			return "Ungueltige Node";
		}

}; 


