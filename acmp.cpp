#include <iostream>
#include <fstream>
using namespace std;
std::ifstream ent("input.txt");
std::ofstream esc("output.txt");
long long n, s, ans;
long long ms[109];
int input();
int output();
int solve();
int input() {

	ent >> n >> s;
	for (int i = 0; i < n; i++) {
		ent >> ms[i];
	}

	return 0;
}
void bubble() {
	for (int j = 0; j < (n - 1); j++) {

		for (int i = 0; i < (n - 1 - j); i++) {
			long long a = 0, b = 0;
			if (ms[i] > ms[i + 1]) {
				a = ms[i];
				b = ms[i + 1];
				ms[i] = b;
				ms[i + 1] = a;

			}


		}
	}


}
int solve() {

	bubble();
	for (int i = 0; i < n; i++) {
		if (s >= ms[i]) {
			ans += 1;
			s -= ms[i];

		}
		else {
			return 0;
		}

	}


	return 0;
}



int output() {
	esc << ans;

	return 0;
}

int main()
{

	input();
	solve();
	output();
	return 0;
}
