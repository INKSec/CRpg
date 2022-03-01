#include <string>
class Persons
{
private:
	std::string name;
	int healhtpoints;
	int attackpoints;
	int defence;

public:
	Persons(std::string, int, int, int);
	void heal();
	void fight(Persons&);

};

