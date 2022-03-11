#include "Persons.h"
#include <string>
#include <iostream>
#include < chrono>
#include <thread>


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

void Persons::get_status() const {
	std::cout << "("  << name << ", HP: " << healhtpoints << ", AP: " << attackpoints << ", DF: " << defence << ")" << std::endl;
}

void Persons::heal() {};

void Persons::fight(Persons& p) {
	while (1) {
		p.get_status();
		std::cout << " greift an!\n\n";
		std::this_thread::sleep_for(std::chrono::seconds(1));
		this->healhtpoints -= p.attackpoints;
		if (this->healhtpoints <= 0) {
			std::cout << this->name << " wurde besiegt.\n";
			break;
		}

		this->get_status();
		std::cout << " greift an!\n\n";
		std::this_thread::sleep_for(std::chrono::seconds(1));
		p.healhtpoints -= this->attackpoints;
		if (p.healhtpoints <= 0) {
			std::cout << p.get_name() << " wurde besiegt.\n";
			break;
		}


		
	}
};