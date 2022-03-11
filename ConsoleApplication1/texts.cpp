#include "texts.h"
#include <iostream>
#include "Persons.h"


void texts::Einleitung() {
	cout << "Hallo Reisender,\nbegib dich auf die Suche nach den Zahlen 1 bis 9 und bringe sie in die richtige Reihenfolge!\n"
	"Aber verrate mir zuerst deinen Namen: ";
};

void texts::Scene1(string n) {
	cout << "Ah, dein Name ist also " << n << "!\n"
			"Es freut mich dich kennen zu lernen.\n"
			"In den naechsten drei Raeumen befinden sich jeweil drei Zahlen.\n"
			"Du brauchst alle um zu entkommen. Willst du den ersten Raum berteten?\n";

}

void texts::Scene2(string n) {
	if (n == "Ja" || n == "JA" || n == "ja" || n == "jA") {
		cout << "Nickend drehst du dich um und oeffnest die schwere Eisentuer...\n"
			"Als Belohnung fuer deinen Mut erhaelst du die Zahlen: 1, 8 und 2.\n";
	} else {
		cout << "Du verneins und wirst umgehend von einem Stein erschlagen\n"
				"Game Over\n";
		exit;
	}
}
// Call by Reference
void texts::GiveNumberScene2(int& a, int& b, int& c) {
	a = 1;
	b = 8;
	c = 2;
}

void texts::Scene3(string n) {
	cout << "Von nun an liegt es an dir einen Weg hinaus aus der Hoehle zu finden.\n"
			"Du erblickst eine Steintafel auf der geschrieben steht: \n";
};

void texts::Scene3MathRiddle() {
	cout << "Finde die Loesung und du wirst belohnt.\n8/2(2+2)\n";
};

void texts::Scene3Solved(string n) {
	cout << "Sehr gut " << n << " du hast das Raetsel geloest!\n"
			"Zur Belohnung erhaelst du die Zahlen 5, 9 und 3.\n";
};

// Call by Pointer
void texts::GiveNumberScene3(int* d, int* e, int* f) {
	*d = 5;
	*e = 9;
	*f = 3;
}

void texts::Scene4() {
	cout << "Vor dir oeffnet sich eine Tuer und du betrittst den naechsten Raum.\n"
			"Mitten im Raum sitzt ein Eichhoernchen und sagt:\n";
};

void texts::Scene4MathRiddle() {
	cout << "Wenn ich meine Zahl um 12 vergroesser erhalte ich 22. Wie heisst meine Zahl geteilt durch 2?\n";
};

void texts::Scene4Solved(string n) {
	cout << n << ", du bist ja ein richtiges Mathegenie!\n"
				 "Allerdings erhaelst du keine Zahlen.\n"
				 "Du wunderst dich, als ploetzlich eine Bossmelodie ertoent und \n" 
				 "ein riesiger Ritter vor dir steht...\n";

};

void texts::Bossfinished(int& a, int& b, int& c, string n) {
	cout << "Mit seinen letzten Worten spricht " << n << " :\n"
		"'Du bist wuerdig die letzten Zahlen zu erhalten. 4, 6, 7'\n"
		"Du wendest dich ab und erblickst ein Zahlenpad.\n"
		"Da du dir die Zahlen notierst hast, gibst du sie ein und...\n"
		"Error!!! ERROR!! ERROR!!!!111\n"
		"Bitte die richtige Reihenfolge verwenden!\n"
		"Da du leider nicht weisst, wie man Zahlen aufsteigend sortiert, fragst du den sterbenden " << n  << ".\n";
	a = 4;
	b = 6;
	c = 7;
};
