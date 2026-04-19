#include <iostream>
#include <fstream>
using namespace std;
#ifdef _DEBUG
#define cin ent
#define cout esc

std::ifstream ent("input.txt");
std::ofstream esc("output.txt");
#endif
long long a;
long long s = 1;
int n;
int input();
int output();
int solve();
int input() {
	cin >> a >> n;

	return 0;
}

int solve() {
	for (int i = 1; i < n; i++) {
		s = s * 2;



	}
	a = a | s;



	return 0;
}



int output() {
	cout << a;

	return 0;
}

int main()
{

	input();
	solve();
	output();
	return 0;
}
