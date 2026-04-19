#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;
#ifdef _DEBUG
#define cin ent
#define cout esc

std::ifstream ent("input.txt");
std::ofstream esc("output.txt");
#endif
long long a, b, c;
long long mn, mx;
int input();
int output();
int solve();
int input() {
	cin >> a >> b >> c;
	if (a > b) {

		mx = a;
		mn = b;
		a = mn;
		b = mx;
	}
	if (b > c) {
		mx = b;
		mn = c;
		b = mn;
		c = mx;
	}
	if (a > b) {

		mx = a;
		mn = b;
		a = mn;
		b = mx;
	}
	if (b > c) {
		mx = b;
		mn = c;
		b = mn;
		c = mx;
	}
	if (a > b) {

		mx = a;
		mn = b;
		a = mn;
		b = mx;
	}
	if (b > c) {
		mx = b;
		mn = c;
		b = mn;
		c = mx;
	}
	return 0;
}

int swap() {
	if (a > b) {

		mx = a;
		mn = b;


	}

	return 0;
}



int solve() {

	if (((c == 0) and (a == 0)) or ((c == 0) and (b == 0)) or ((a == 0) and (b == 0)) or (a == 0) or (b == 0) or (c == 0)) {
		cout << "impossible";
		exit(0);

	}
	if (c >= (a + b)) {
		cout << "impossible";
		exit(0);

	}
	
	if (a == b and a == c) {

		cout << "acute";
		exit(0);
	}
	if ((c * c) == (a * a) + (b * b)) {

		cout << "right";
		exit(0);
	}
	if ((c * c) < (a * a) + (b * b)) {
		cout << "acute";
		exit(0);
	}
	if ((c * c) > (a * a) + (b * b)) {

		cout << "obtuse";

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
