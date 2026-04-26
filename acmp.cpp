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
long long ms[1009];
int input();
int output();
int solve();
int input() {
    cin >> n;
    for (int i = 1; i <= n; i++) {

        cin >> ms[i];
    }
    return 0;
}

int solve() {
   
    for (int i = 1; i <= n; i++) {
        if (ms[i] <= 437) {

            cout << "Crash " << i;
            return 0;
       }
        
    }
    cout << "No crash";


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
