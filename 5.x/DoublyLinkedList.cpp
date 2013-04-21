/*
 * =====================================================================================
 *
 *       Filename:  DoublyLinkedList.cpp
 *
 *    Description:  Aufgabe 5.5
 *
 *        Version:  1.0
 *        Created:  21.04.2013 10:05:54
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Daniel Falkner (df), daniel.falkner@akad.de
 *   Organization:  AKAD Pinneberg
 *
 * =====================================================================================
 */

#include "DoublyLinkedList.h"
#include "DoublyLinkedNode.h"
#include "ListException.h"

DoublyLinkedList::DoublyLinkedList() {

}

DoublyLinkedList::~DoublyLinkedList() {

}

void DoublyLinkedList::append(int data) {

	DoublyLinkedNode *n = new DoublyLinkedNode;
	n->data = data;
	n->next = 0;
	n->previous_node = 0;	

	if (first_node == 0) {
	
		first_node = n;
	}
		
	if (last_node != 0) {
		last_node->next = n;
		n->previous_node = last_node;
	}
		
	last_node = n;


}

void DoublyLinkedList::back() {

	current_node = last_node;

}

int DoublyLinkedList::previous() {
	
	if (current_node == 0) throw ListException();	
	
	int data;
	data = current_node->data;
	current_node = current_node->previous_node;
	return data;
}
