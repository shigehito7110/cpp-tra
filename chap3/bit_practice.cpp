#include <iostream>
#include <vector>
using namespace std;


int main() {
  int a, b, c;
  a = 0b01010; // 10
  b = 0b01000; // 8
  c = 0b00100; // 4

  cout << (a & b) << endl; // 8 bの10進数の値
  cout << (a & c) << endl; // 0 cが含まれないので

  if(a & b) cout << "bはaに含まれている" << endl;
  if(a & c) cout << "cはaに含まれている" << endl;
}