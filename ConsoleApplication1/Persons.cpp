#include "Persons.h"
#include <string>
#include <iostream>

Persons::Persons(std::string n, int h, int a, int d) : name(n), healhtpoints(h), attackpoints(a), defence(d) {
	
};

std::string Persons::get_name() {
	return name;
}
int Persons::get_hp() {
	return healhtpoints;
}

int Persons::get_ap() {
	return attackpoints;
}

int Persons::get_defence() {
	return defence;
}

void Persons::heal() {};

void Persons::fight(Persons& p) {
	
};