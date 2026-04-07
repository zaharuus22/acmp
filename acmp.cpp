#include <iostream>
#include <fstream>
using namespace std;
#ifdef _DEBUG
#define cin ent
#define cout esc

std::ifstream ent("input.txt");
std::ofstream esc("output.txt");
#endif
long long n, m;
long long s;
long long ms[1009][1009];
int input();
int output();
int solve();
int input() {
	cin >> n >> m;
	
	return 0;
}
int elder(long long ans, long long dg) {
	if (ans % 10 == dg) {
		s++;

	}


}
int safik(int dg) {
	for (int x = 1; x <= n; x++) {
		for (int y = 1; y <= m; y++) {

			

		}


	}



}
int solve() {
	for (int x = 1; x <= n ; x++) {
		for (int y = 1; y <= m; y++) {

			ms[x][y] = x * y;

		}


	}
	for (int dg = 0; dg <= 9; dg++) {
		safik(dg);

	}



	return 0;
}



int output() {
	for (int i = 0; i < n; i++) {

		cout << s << "\n";
	}

	return 0;
}

int main()
{

	input();
	solve();
	output();
	return 0;
}
