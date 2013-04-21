
/*
 * =====================================================================================
 *        Class:  DoubleLinkedList
 *  Description:  Aufgabe 5.5
 *
 * =====================================================================================
 */
#include "LinkedList.h"
#include "DoublyLinkedNode.h"

class DoublyLinkedList: public LinkedList
{
	public:
		/* ====================  LIFECYCLE     ======================================= */
		DoublyLinkedList ();                             /* constructor */
		~DoublyLinkedList();
	
		/* ====================  ACCESSORS     ======================================= */
		void append(int data);
		/* ====================  MUTATORS      ======================================= */

		/* ====================  OPERATORS     ======================================= */
		void back();
		int previous();
	protected:
		/* ====================  METHODS       ======================================= */

		/* ====================  DATA MEMBERS  ======================================= */
		DoublyLinkedNode *first_node;
		DoublyLinkedNode *last_node;
		DoublyLinkedNode *current_node;
	private:
		/* ====================  METHODS       ======================================= */

		/* ====================  DATA MEMBERS  ======================================= */

}; /* -----  end of class DoubleLinkedList  ----- */

