#include <iostream>
#include <fstream>
using namespace std;
#ifdef _DEBUG
#define cin ent
#define cout esc

std::ifstream ent("input.txt");
std::ofstream esc("output.txt");
#endif
int n;
int ms[10000];
int s = 0;
bool t;
int input();
int output();
int solve();
int input() {
	cin >> n;

	return 0;
}

int solve() {
	if (n == 1) {

		cout << 11;
		t += 1;
	}
	else if (n < 10) {
		cout << 1;
		t += 1;
	}





	for (int i = 9; i >= 2; i--) {
		while (n % i == 0) {
			ms[s] = i;
			s++;
			n = n / i;

		}


	}
	for (int i = s - 1; i >= 0; i--) {

		cout << ms[i];
		t += 1;
	}
	if (t == 0) {

		cout << "No solution";
	}
	else {



	}



	return 0;
}



int output() {

	return 0;
}

int main()
{

	input();
	solve();
	output();
	return 0;
}
