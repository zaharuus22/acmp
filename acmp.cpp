#include <iostream>
#include <fstream>
#include <queue>
#include <set>
#include <map>
using namespace std;


ifstream ent("input.txt");
ofstream esc("output.txt");


int main()
{

	int n;
	ent >> n;
	deque <int> d(0);
	int o = 0;
	int num = 0;
	int l = 0;
	for (int i = 0; i < n; i++) {
		ent >> o;
		
		if (o == 1) {
			ent >> num;
			d.push_front(num);
		}
		if (o == 2) {
			ent >> num;
			d.push_back(num);
		}
		if (o == 3) {
			l = d.front();
			esc << l << ' ';
			d.pop_front();
		}
		if (o == 4) {
			l = d.back();
			esc << l << ' ';
			d.pop_back();
		}


	}




}
