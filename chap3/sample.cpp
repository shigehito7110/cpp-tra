#include <iostream>
#include <vector>
using namespace std;

// なんでもお試し用のファイル
int main() {
  int N = 4;
  vector<int> a(N), b(N);
  for (int i = 0; i < N; i++){
    cin >> a[i];
    cout << a[i] << endl;
  }
  cout << "ここからb" << endl;
  for (int i = 0; i < N; ++i){
    cin >> b[i];
    cout << b[i] << endl;
  }
}