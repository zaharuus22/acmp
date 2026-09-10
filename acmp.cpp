/*

Значение выражения 2026 8 + 2026 16 записали в двоичной системе счисления. Сколько еди-ниц содержит эта двоичная запись?(1 балл

2026 (8) = (2)
010000010110

2026 (16) = (2)
0010000000100110
0000010000010110
0010001000011110


0010000000100110

0000010000010110


*/

#include <fstream> // файловый ввод вывод
#include <iostream> // консольный ввод вывод
#include <string> // std::string    обертка над std::vector<char> + substr 
#include <vector>

using namespace std;



char ch;
long long w = 0, mx = 0;

ifstream in("input.txt");
ofstream out("output.txt");
int z(int y) {

	for (int x = 0; x < 10; x++) {
		if (x + y == 9) {
			out << 2;
		}
		else {
			if (x == y) {
				out << 1;
			}
			else {
				out << 0;
			}
		}

	}


	return 1;
}
int main() {


	for (int y = 0; y < 10; y++) {
		z(y);
		out << "\n";


	}


}







//----------------------



