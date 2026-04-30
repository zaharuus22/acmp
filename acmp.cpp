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
int ms[10000];
int s = 0;
int input();
int output();
int solve();
int input() {
	cin >> n;

	return 0;
}

int solve() {


		
	
		for (int i = 9; i >= 2; i--) {
			while (n % i == 0) {
				ms[s] = i;
				s++;
				n = n / i;

			}


		}
		cout << ms[0] << ms[1];
	



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
