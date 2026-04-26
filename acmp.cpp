#include <iostream>
#include <fstream>
using namespace std;
#ifdef _DEBUG
#define cin ent
#define cout esc

std::ifstream ent("input.txt");
std::ofstream esc("output.txt");
#endif
long long a,b;
int input();
int output();
int solve();
int input() {
    cin >> a >> b;
    
    return 0;
}

int solve() {
    
    for (int i = a; i <= b; i++) {

        if (a % 2 == 0) {
            cout << i << " ";

        }
        
        a++;

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
