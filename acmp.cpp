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
long long ms[10009];
int input();
int output();
int solve();
int input() {
	cin >> n >> m;

	return 0;
}


int solve() {

	
	
		for (int i = 1; i <= n; i++)//уточнить
		{
			for (int j = 1; j <= m; j++)
			{
				long long ans;
				ans = i * j;
				while (ans != 0) {
					long long s;
					s = ans % 10;

					ms[s] += 1;

					ans = ans / 10;



				}


			}


		}
	

	return 0;
}



int output() {
	for (int i = 0; i <= 9; i++) {

		cout << ms[i] << "\n";
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
