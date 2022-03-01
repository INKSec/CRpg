#include "Persons.h"

Persons::Persons(std::string n, int h, int a, int d) : name(n), healhtpoints(h), attackpoints(a), defence(d) {};

void Persons::heal() {};

void Persons::fight(Persons& p) {};