/*
 * =====================================================================================
 *
 *       Filename:  fifo.cpp
 *
 *    Description:  Aufgabe 4.2
 *
 *        Version:  1.0
 *        Created:  18.04.2013 16:23:51
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Daniel Falkner (df), daniel.falkner@akad.de
 *   Organization:  AKAD Pinneberg
 *
 * =====================================================================================
 */

#include	<cstdlib>
#include 	<iostream>
#include	<string>
#include 	<queue>

using namespace std;

struct kunde {

	string name;
	string art;

};

class FIFO 
{

	public:
		void einfuegen(struct kunde kunde);
		void verarbeiten();
	private:
		queue<struct kunde> data;

};

void FIFO::einfuegen(struct kunde kunde) {

	data.push(kunde);
	cout << "Daten hinzugefuegt: " << kunde.name << " : " << kunde.art << endl;
}

void FIFO::verarbeiten() {
	
	struct kunde k;

	while (!data.empty()) {

		k = data.front();

		cout << "Verarbeite: " << k.name << " : " << k.art << endl;

		data.pop();

	}
}

int main() {

	FIFO f;
	struct kunde k;

	k.name = "name";
	k.art = "art";
	f.einfuegen(k);

	k.name = "name2";
	k.art = "art2";
	f.einfuegen(k);

	f.verarbeiten();

	k.name = "name3";
 	k.art = "art3";
	f.einfuegen(k);

	f.verarbeiten();


}


