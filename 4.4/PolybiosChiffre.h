
/*
 * =====================================================================================
 *        Class:  PolybiosChiffre
 *  Description:  
 *
 * =====================================================================================
 */
#include <string>

using namespace std;

class PolybiosChiffre
{
	public:
		/* ====================  LIFECYCLE     ======================================= */
		PolybiosChiffre ();                             /* constructor */

		/* ====================  ACCESSORS     ======================================= */
		void printTable();
		/* ====================  MUTATORS      ======================================= */

		/* ====================  OPERATORS     ======================================= */
		bool setKey(const string& key);
		string encrypt(const string& plain_text);
		string decrypt(const string& cipher_text);
		void randomKey();
	protected:
		/* ====================  METHODS       ======================================= */

		/* ====================  DATA MEMBERS  ======================================= */

	private:
		/* ====================  METHODS       ======================================= */

		/* ====================  DATA MEMBERS  ======================================= */
		char quadrat[6][6];
	
}; /* -----  end of class PolybiosChiffre  ----- */

