#include "texts.h"
#include <iostream>


void texts::Einleitung() {
	cout << "Hallo Reisender" << ", begib dich auf die Suche nach den Zahlen 1 bis 9 und bringe sie in die richtige Reihenfolge!\n";
	cout << "Aber verrate mir zuerst deinen Namen: ";
};

void texts::Scene1(string n) {
	cout << "Ah, dein Name ist also " << n << "!\n";
	cout << "Es freut mich dich kennen zu lernen.\n";
	cout << "In den naechsten drei Raeumen befinden sich jeweil drei Zahlen.\n";
	cout << "Du brauchst alle um zu entkommen. Willst du den ersten Raum berteten?\n";

}

void texts::Scene2(string n) {

}
