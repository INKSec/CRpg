#include <string>
using namespace std;
#ifndef _texts_
#define _texts_

class texts
{
private:

public:
	void Einleitung();
	void Scene1(string);
	void Scene2(string);
	void GiveNumberScene2(int&, int&, int&);
	void Scene3(string);
	void Scene3MathRiddle();
	void Scene3Solved(string);
	void GiveNumberScene3(int*, int*, int*);
	void Scene4();
	void Scene4MathRiddle();
	void Scene4Solved(string);
	void Bossfinished(int&, int&, int&, string);
};



#endif // !_texts_



