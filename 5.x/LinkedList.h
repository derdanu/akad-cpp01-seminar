#ifndef LINKEDLIST
#define LINKEDLIST
/*
 * =====================================================================================
 *        Class:  LinkedList
 *  Description:  Aufgabe 5.2
 *
 * =====================================================================================
 */

#include "LinkedNode.h"

class LinkedList
{
	
	public:
		/* ====================  LIFECYCLE     ======================================= */
		LinkedList ();                             /* constructor */
		~LinkedList();
		/* ====================  ACCESSORS     ======================================= */
		const int get();
		/* ====================  MUTATORS      ======================================= */
		void append(int data);
		void clear();
		/* ====================  OPERATORS     ======================================= */
		void front();
		int next();
		const bool hasCurrent();
		const bool empty();
		
	protected:
		/* ====================  METHODS       ======================================= */

		/* ====================  DATA MEMBERS  ======================================= */
		LinkedNode *first_node;
		LinkedNode *last_node;
		LinkedNode *current_node;
	private:
		/* ====================  METHODS       ======================================= */

		/* ====================  DATA MEMBERS  ======================================= */

}; /* -----  end of class LinkedList  ----- */
#endif LINKEDLIST
