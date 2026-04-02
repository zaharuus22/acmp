#include <iostream>
#include <fstream>
using namespace std;


std::ifstream ent("input.txt");
std::ofstream esc("output.txt");
int ms[3];
int mx, mn;
int input();
int output();
int solve();
int bubble();
int input() {
	for (int i = 0; i < 3; i++) {
		ent >> ms[i];
	}
	return 0;
}

int bubble() {

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < (n - 1); j++) {
            if (ms[j] > ms[j + 1]) {
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
