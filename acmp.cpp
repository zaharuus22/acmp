#include <iostream>
#include <fstream>
#include <string>
using namespace std;
#ifdef _DEBUG
std::ifstream ent("input.txt");
std::ofstream esc("output.txt");
#define ent cin
#define esc cout
#endif

string ms[103];
long long n;
int input();
int output();
int solve();
int input() {
    cin >> n;
    for (int i = 0; i < n; i++) {

        cin >> ms[i];
        ms[i].size();
    }
    return 0;
}

int solve() {





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
