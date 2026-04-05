#include <iostream>
#include <fstream>
using namespace std;
std::ifstream ent("input.txt");
std::ofstream esc("output.txt");
long long n, m, a, b;
long long ms[1009];
long long ans = 0;
int input();
int output();
int solve();
int bubble();
int input() {
	ent >> n >> m;
	for (int i = 0; i < n; i++) {
		ent >> ms[i];


	}

	return 0;
}
int bubble() {

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < (n - 1); j++) {
			if (ms[j] < ms[j + 1]) {
				a = ms[j];
				b = ms[j + 1];
				ms[j] = b;
				ms[j + 1] = a;

			}

		}


	}
	return 0;
}


int solve() {

	for (int i = 0; i < m; i++) {
		if (ms[i] < 0) {

			break;
		}

		ans += ms[i];
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
	bubble();
	solve();
	output();
	return 0;
}
