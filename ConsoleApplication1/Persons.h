#include <string>
class Persons
{
private:
	std::string name;
	int healhtpoints;
	int attackpoints;
	int defence;

public:
	// Constructor
	Persons(std::string, int, int, int);
	// getter
	std::string get_name();
	int get_hp();
	int get_ap();
	int get_defence();

	void heal();
	void fight(Persons&);

};

