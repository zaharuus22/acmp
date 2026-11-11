#include <iostream>
#include <fstream>
#include <vector>
#include <queue>
using namespace std;
int main() {

	ofstream esc("output.txt");
	ifstream ent("input.txt");

	ios_base::sync_with_stdio(0);
	ent.tie(0);
	deque <int> v(100, 10);
	for (int i = 0; i < 100; i++) {
		v.push_back(5);


	}
	for (int i = 0; i < 50; i++) {
		v.pop_back();


	}
	for (int i = 0; i < 20; i++) {
		v.pop_front();


	}
	for (int i = 0; i < 50; i++) {
		v.push_front(66);


	}
	for (int i = 0; i < v.size(); i++)
	{

		esc << v[i]<<"\n";


	}


}