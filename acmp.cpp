#include <iostream>
#include <fstream>
using namespace std;
#ifdef _DEBUG
#define cin ent
#define cout esc

std::ifstream ent("input.txt");
std::ofstream esc("output.txt");
#endif
int a, b, c, d;
int input();
int output();
int solve();
int input() {
    cin >> a >> b >> c >> d;
    
    return 0;
}

int solve() {
   

    for (int i = a; i <= b; i++) {

        if (i%d == c) {

            cout << i << " ";

        }

    }


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
