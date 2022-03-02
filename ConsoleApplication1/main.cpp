#include <iostream>
#include "texts.h"
#include "Persons.h"
#include <vector>
using namespace std;
void Clear();


int main()
{
    string name;
    string decision;

    vector<int> numbers;

    int a, b, c, d, e, f, g, h, i;

    // TextObjekt is used for every Text
    texts texts;

    texts.GiveNumber(a, b, c);
    cout << a;
    /*

    // Scene 1
    texts.Einleitung();
    cin >> name;
    Persons hero(name, 10, 10, 10);
    hero.get_status();
    texts.Scene1(hero.get_name());
    cin >> decision;
    Clear();

    //Scene 2
    texts.Scene2(decision);
    */
}

void Clear()
{
    cout << "\x1B[2J\x1B[H";
};



