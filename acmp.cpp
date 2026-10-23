#include <iostream>
#include <fstream>
std::ofstream esc("output.txt");
std::ifstream ent("input.txt");
using namespace std;
int main() {
	int n;
	ent >> n;
	int a, b;
	int mx = 0, mn = 100;
	while (n != 0) {
		ent >> a >> b;
		if (mx < a) {
			mx = a;
		}
		if (mn > b) {
			mn = b;
		}

		n--;
	}
	int q = mn - mx;
	if (q >= 0) {
		esc << "YES";
	}
	else {
		esc << "NO";

	}

	


}