#include <iostream>
#include <fstream>
using namespace std;
std::ifstream ent("input.txt");
std::ofstream esc("output.txt");

long long n, a, b, ans;
int input();
int output();
int solve();
int input() {
    ent >> n >> a >> b;
    
    return 0;
}

int solve() {
   
    ans = n * a * b;



    return 0;
}



int output() {

    esc << ans * 2;
    return 0;
}

int main()
{

    input();
    solve();
    output();
    return 0;
}
