#include <iostream>
#include <fstream>
using namespace std;
#ifdef _DEBUG
#define cin ent
#define cout esc

std::ifstream ent("input.txt");
std::ofstream esc("output.txt");
#endif
long long a;
int input();
int output();
int solve();
int input() {
    cin >> a;
    
    return 0;
}

int solve() {
    if (a%2 != 0) {
        a += 1;

   }
    else {
        a += 2;
    }


    return 0;
}



int output() {
    cout << a;
    return 0;
}

int main()
{

    input();
    solve();
    output();
    return 0;
}
