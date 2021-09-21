#include <iostream>
#include <vector>
using namespace std;

// bitset論理和
// int main() {
//   int a = 0;
//   cout << a << endl;
//   a = a | 0b001;
//   if(a == 0b001) cout << "yes" << endl;
//   cout << a << endl;
//   a = a | 0b010;
//   if(a == 0b011) cout << "yes" << endl;
//   cout << a << endl;
//   a = a | 0b100;
//   if(a == 0b111) cout << "yes" << endl;
//   cout << a << endl;
// }

// vector
int main() {
  // 1次元配列
  vector<int> a;
  a.assign(10, -1);

  for(int i = 0; i < a.size(); i++) {
    cout << a[i] << endl;
  }

  vector<vector<int> > b;
  // 2次元配列の初期化
  b.assign(10, vector<int>(5, -1));

  for(int i = 0; i < b.size(); i++) {
    cout << "b[" << i << "]" << endl;
    for(int f = 0; f < b[i].size(); f++) {
      cout << b[i][f] << endl;
    }
  }
}
