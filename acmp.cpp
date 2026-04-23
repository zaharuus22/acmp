#include <iostream>
#include <fstream>
using namespace std;
#ifdef _DEBUG
#define cin ent
#define cout esc

std::ifstream ent("input.txt");
std::ofstream esc("output.txt");
#endif
long long a,n;
long long ans;
long long ed = 1;
unsigned long long e, inv;
int input();
int output();
int solve();
int input() {
    cin >> a >> n;
    e = 1ll << (n-1ll);
    inv = ~(e);
    return 0;
}

int solve() {
   

    
    ans = a & e;
    if (ans != 0) {
        
        a = a & inv;
    }
    else {

        a = a | e;
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
