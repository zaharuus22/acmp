#include <iostream>
#include <fstream>
using namespace std;
#ifdef _DEBUG
#define cin ent
#define cout esc

std::ifstream ent("input.txt");
std::ofstream esc("output.txt");
#endif
long long n;
int input();
int output();
int solve();
int input() {
	cin >> n;

	return 0;
}

int solve() {
	for (int i = 0; i < n; i++) {
		long long d;
		long long s = 0;
		long long ms[1000];
		cin >> d;
		long long m = d;

		while (d != 0) {
			if (d % 2 == 0) {
				cout << 0;
				ms[s] = 0;

			}
			else {
				cout << 1;
				ms[s] = 1;

			}
			s++;
			d = d / 2;
		}
		cout << " " << s;
		cout << " ";
		/*for (int i = 0; i < s; i++) */
		for (int i = s - 1;i >= 0 ; i--) {
			cout << ms[i];
		}
		cout << "\n";
		d = m;
	}

	return 0;
}



int output() {


	return 0;
}

int main()
{

	input();
	for (int i = 0; i < 3; i++) {

		solve();
	}
	output();
	return 0;
}
