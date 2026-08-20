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





long long a, b;
long long w = 0, q = 0, r = 0, t = 0;



int main() {

    ifstream in("input.txt");
    ofstream out("output.txt");


    in >> a >> b;

   

    while ((a != 0) or (b != 0)) {
        w = (a % 10);
        a = a / 10;
        q = (b % 10);
        b = b / 10;
        r = w + q + t;
        if (r >= 10) {
            r -= 10;
            t = 1;
      }
        else {

            t = 0;
        }

        out << r;

    }
    if (t == 1) {

        out << t;
  }




}






//----------------------



