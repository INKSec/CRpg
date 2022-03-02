
#include <iostream>
#include "texts.h"
#include "Persons.h"
using namespace std;
int main()
{
    string name;
    string decision;

    // TextObjekt is used for every Text
    texts texts;

    texts.Einleitung();
    cin >> name;
    Persons hero(name, 10, 10, 10);
    texts.Scene1(hero.get_name());
    cin >> decision;
    
}

