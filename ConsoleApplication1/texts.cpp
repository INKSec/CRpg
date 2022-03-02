#include "texts.h"
#include <iostream>
#include "Persons.h"


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
	if (n == "Ja" || n == "JA" || n == "ja" || n == "jA") {
		cout << "Nickend drehst du dich um und oeffnest die schwere Eisentuer...\n";
		cout << "";
	} else {
		cout << "Du verneins und wirst umgehend von einem Stein erschlagen\n";
		cout << "Game Over\n";
		exit;
	}
}

void texts::GiveNumber(int& a, int& b, int& c) {
	a = 2;
	b = 3;
	c = 4;
}
