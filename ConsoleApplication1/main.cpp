#include <iostream>
#include "texts.h"
#include "Persons.h"
#include <vector>
using namespace std;
void ClearScreen();


int main()
{
    string name;
    string decision; // Temp
    int mathriddle = 0;

    vector<int> numbers;
    // Array?
    int a, b, c, d, e, f, g, h, i;
    // Training purpose
    int* dpointer = &d, *epointer = &e, *fpointer = &f;

    // TextObjekt is used for every Text
    texts texts;

    
    
    

    // Scene 1
    texts.Einleitung();
    cin >> name;
    Persons hero(name, 10, 10, 10);
    hero.get_status();
    texts.Scene1(hero.get_name());
    cin >> decision;
    ClearScreen();

    //Scene 2
    texts.Scene2(decision);
    texts.GiveNumberScene2(a, b, c);
    ClearScreen();
    
    //Scene 3
    texts.Scene3(hero.get_name());
    while (mathriddle == 0) {
        int answer;
        texts.Scene3MathRiddle();
        cout << "Antwort: ";
        cin >> answer;
        if (answer == 16) {
            mathriddle = answer;
        }
        else if (answer > 100) {
            cout << "Das Ergebnis liegt unter " << answer << ".\n";
        } else {
            cout << "Die Antwort ist nicht Korrekt!\n";
        }
    };
    texts.Scene3Solved(hero.get_name());
    texts.GiveNumberScene3(&d, &e, &f);
    cout << d;
}

void ClearScreen()
{
    cout << "\x1B[2J\x1B[H";
};



