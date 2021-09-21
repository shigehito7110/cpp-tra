#include <iostream>
using namespace std;

int func(int n) {
  if(n == 0) return 0;
  else if(n == 1) return 1;

  return func(n -1) + func(n -2);
}

int main() {
  int N;
  cout << "数列の個数Nを入力してください" << endl;
  cin >> N;

  int result = func(N);
  cout << result << endl;
}
