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
//2540160
int input();
int output();
int solve();
int input() {
	cin >> n;

	return 0;
}

int solve() {
	long long ms[1000];
	long long s = 0;
	while (n != 0) {


		cout << n % 10;
		ms[s] = n % 10;
		s++;



	}




	return 0;
}



int output() {

	cout << n;

	return 0;
}

int main()
{

	input();
	solve();
	output();
	return 0;
}
