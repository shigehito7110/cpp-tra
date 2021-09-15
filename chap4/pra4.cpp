#include <iostream>
using namespace std;

int func(int m, int n) {
  if(m % n == 0) return n;
  return func(n, m % n);
}

int main() {
  int M, N;
  cout << "数値MとNを入力してください" << endl;
  cin >> M >> N;

  int result;
  result = func(M, N);
  cout << M << "と" << N << "の最大公約数は" << result << endl;
}
