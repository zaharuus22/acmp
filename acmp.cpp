#include <iostream>
#include <fstream>
using namespace std;


std::ifstream ent("input.txt");
std::ofstream esc("output.txt");
int ms[3];
int mx, mn;
int input();
int output();
int solve();
int input() {
	for (int i = 0; i < 3; i++) {
		ent >> ms[i];
	}
	return 0;
}

int solve() {

	for (int i = 0; i < 3; i++) {
		if (ms[i] > ms[i + 1]) {
			mx = ms[i];

		}
		

		
	}
	for (int i = 0; i < 3; i++) {
		if (ms[i] > ms[i+1]) {
			mn = ms[i+1];

		}
		else {
			mn = ms[i];
		}
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
