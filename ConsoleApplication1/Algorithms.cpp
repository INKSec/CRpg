#include "Algorithms.h"
#include <vector>


void Algorithm::swapper(int& a, int& b) {
	int temp;
	temp = a;
	a = b;
	b = temp;
}
// my version
void Algorithm::bubblesort(vector<int>& t) {
    int n = t.size();
    for (size_t i = 0; i < t.size() - 1; ++i) {
        for (size_t j = 0; j < t.size() - i - 1; ++j) {
            if (t.at(j) > t.at(j + 1)) {
                swapper(t.at(j), t.at(j + 1));

            }
        }
    }
}

