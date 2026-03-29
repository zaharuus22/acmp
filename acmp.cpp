#include <iostream>
#include <fstream>
using namespace std;
std::ifstream ent("input.txt");
std::ofstream esc("output.txt");
//#define ent cin
//#define esc cout
int input();
int a;
bool ans;
int output();
int solve();
int input() {

    ent >> a;
    return 0;
}

int solve() {
   
    /*
    1 n 
    3 n
    4 y
    5 n
    6 n
    */
    if (a % 2 == 1) {
        ans = 0;
        return 0;
    }
    if (a == 2) {
        ans = 0;
        return 0;
    }
    if (a % 2 == 0) {
        ans = 1;
    }
    else {
        ans = 0;
    }

    return 0;
}



int output() {
    if (ans) {
        esc << "YES";

    }
    else {
        esc << "NO";
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
