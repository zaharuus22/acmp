#include <iostream>
#include <fstream>
#include <vector>
std::ofstream esc("output.txt");
std::ifstream ent("input.txt");
using namespace std;
int main() {
	int n;
	ent >> n;
	int a[200][2];
	vector<int> k;
	vector<int> h;
	int mx = 0, mn = 100;
	/*while (n != 0) {
		ent >> a >> b;
		if (mx < a) {
			mx = a;
		}
		if (mn > b) {
			mn = b;
		}

		n--;
	}*/

	int f = 0;
	for (int i = 0; i < n; i++) {
		ent >> f;
		k.push_back(f);
		ent >> f;
		h.push_back(f);
		if (mx < k[i]) {
			mx = k[i];
		}
		if (mn > h[i]) {
			mn = h[i];
		}

	}
	int q = mn - mx;
	if (q >= 0) {
		esc << "YES";
	}
	else {
		esc << "NO";

	}

	


}