#include <iostream>
#include "texts.h"
#include "Persons.h"
#include <vector>
#include <thread>
#include < chrono>

using namespace std;
void ClearScreen();


int main()
{
    string name;
    string decision; // Temp
    int mathriddle = 0;

    vector<int> numbers;
    // Array? Array! next time
    int a, b, c, d, e, f, g, h, i;
    // for training purpose
    int* dpointer = &d, *epointer = &e, *fpointer = &f;

    // TextObjekt is used for every Text
    texts texts;


    // Scene 1
    texts.Einleitung();
    cin >> name;
    Persons hero(name, 10, 2, 0);
    hero.get_status();
    texts.Scene1(hero.get_name());
    cin >> decision;
    ClearScreen();

    //Scene 2
    texts.Scene2(decision);
    texts.GiveNumberScene2(a, b, c);
    numbers.push_back(a);
    numbers.push_back(b);
    numbers.push_back(c);
    std::this_thread::sleep_for(std::chrono::seconds(5));
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
    numbers.push_back(d);
    numbers.push_back(e);
    numbers.push_back(f);
    std::this_thread::sleep_for(std::chrono::seconds(3));
    ClearScreen();
    mathriddle = 0;

       //Scene4
    texts.Scene4();
    while (mathriddle == 0) {
        int answer;
        texts.Scene4MathRiddle();
        cout << "Antwort: ";
        cin >> answer;
        if (answer == 5) {
            mathriddle = answer;
        }
        else {
            cout << "Versuch es noch einmal.\n";
        }

    }
    ClearScreen();
    texts.Scene4Solved(hero.get_name());
    std::this_thread::sleep_for(std::chrono::seconds(5));
    ClearScreen();
    

    //Scene5
    Persons boss("DungeonLord Harald", 10, 1, 0);
    hero.fight(boss);
    std::this_thread::sleep_for(std::chrono::seconds(2));
    ClearScreen();
    texts.Bossfinished(g, h, i, boss.get_name());
    numbers.push_back(g);
    numbers.push_back(h);
    numbers.push_back(i);

}

void ClearScreen()
{
    cout << "\x1B[2J\x1B[H";
};



