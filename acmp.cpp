#include <iostream>
#include <fstream>
using namespace std;
std::ifstream ent("input.txt");
std::ofstream esc("output.txt");
long long n;
long long ms[103];
long long a, b;
long long sh = 0, kr = 0;
int input();
int output();
int solve();
int input() {

    ent >> n;
    for (int i = 0; i < n; i++) {
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
   
    for (int i = 0; i < n / 2; i++) {
      /*  esc << ms[-i + (n - 1)] << ' ';*/

        sh += ms[-i + (n - 1)];

    }
    for (int i = 0; i < n / 2; i++) {
        kr += ms[i];

    }
    


    return 0;
}



int output() {

    esc << sh - kr;
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
