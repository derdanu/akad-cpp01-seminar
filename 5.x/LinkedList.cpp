/*
 * =====================================================================================
 *
 *       Filename:  LinkedList.cpp
 *
 *    Description:  Aufgabe 5.2
 *
 *        Version:  1.0
 *        Created:  21.04.2013 07:29:16
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Daniel Falkner (df), daniel.falkner@akad.de
 *   Organization:  AKAD Pinneberg
 *
 * =====================================================================================
 */

#include "LinkedList.h"
#include "ListException.h"
#include <cstdlib>
#include <iostream>

LinkedList::LinkedList () {

	first_node = 0;
	last_node = 0;
	current_node = 0;

}                             
LinkedList::~LinkedList() {

	clear();
	
	current_node = first_node;
	while(current_node != 0) {
		std::cout << "run.";
		last_node = current_node->next;
		free(current_node);
		current_node = last_node;
	}	

}
const int LinkedList::get() {

	if (current_node == 0) throw ListException();	
	
	return current_node->data;
}
void LinkedList::append(int data) {

	LinkedNode *n = new LinkedNode;
	n->data = data;
	n->next = 0;
	
	if (first_node == 0) {
	
		first_node = n;
	}
		
	if (last_node != 0) {
		last_node->next = n;
	
	}
		
	last_node = n;

}
void LinkedList::clear() {

	first_node = 0;
	last_node = 0;
	current_node = 0;		

}
void LinkedList::front() {
	current_node = first_node;
}
int LinkedList::next() {

	if (current_node == 0) throw ListException();	
	
	int data;
	data = current_node->data;
	current_node = current_node->next;
	return data;
		
}
const bool LinkedList::hasCurrent() {

	if (current_node == 0) {
		return false;
	} else {
		return true;
	}
}
const bool LinkedList::empty() {

	if (first_node == 0) {
		return true;
	} else {
		return false;
	}
}

