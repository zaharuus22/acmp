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
int m;
int input();
int output();
int solve();
int input() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> m;
		cout << char(m);
	}

	return 0;
}

int solve() {





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
