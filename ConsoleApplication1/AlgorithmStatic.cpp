#include <vector>
using namespace std;

class AlgorithmStatic {
public:
	void swapper1(int& a, int& b) {
		int temp;
		temp = a;
		a = b;
		b = temp;
	};
	// my version
	void bubblesort1(vector<int>& t) {
		unsigned int i, j;
		bool swap;
		int n = t.size();
		for (i = 0; i < n - 1; i++) {
			swap = false;
			for (j = 0; j < n - i - 1; j++) {
				if (t[j] > t[j] + 1) {
					swapper1(t[j], t[j + 1]);
					swap = true;
				}
			}
		}
	}

};