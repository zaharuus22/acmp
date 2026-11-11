#include <iostream>
#include <fstream>
#include <queue>
#include <set>
using namespace std;
#ifdef _DEBUG
#define cin ent
#define cout esc

std::ifstream ent("input.txt");
std::ofstream esc("output.txt");
#endif

int main() {

	set <int> d = { 10 , 4 , 50 , 105 };
	d.insert(5);
	for (auto i = d.end(); i != d.begin();)
	{
		--i;
		esc << *i << "\n";


	}

	for (auto i = d.begin(); i != d.end(); i++) {

		
		esc << *i << "\n";


	}
	if (d.end() != d.find(40)) {
		esc << "Yes";


	}
	else {
		esc << "No";
	}



}
