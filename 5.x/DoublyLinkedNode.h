#ifndef DOUBLYLINKEDNODE
#define DOUBLYLINKEDNODE

/*
 * =====================================================================================
 *        Class:  DoublyLinkedNode
 *  Description: Aufgabe 5.5 
 *
 * =====================================================================================
 */

#include "LinkedNode.h"

class DoublyLinkedNode: public LinkedNode
{
	public:
		/* ====================  LIFECYCLE     ======================================= */
		DoublyLinkedNode () {};                             /* constructor */
		~DoublyLinkedNode() {};
		/* ====================  ACCESSORS     ======================================= */

		/* ====================  MUTATORS      ======================================= */

		/* ====================  OPERATORS     ======================================= */

		DoublyLinkedNode *previous_node;
	protected:
		/* ====================  METHODS       ======================================= */

		/* ====================  DATA MEMBERS  ======================================= */

	private:
		/* ====================  METHODS       ======================================= */

		/* ====================  DATA MEMBERS  ======================================= */

}; /* -----  end of class DoublyLinkedNode  ----- */
#endif DOUBLYLINKEDNODE
