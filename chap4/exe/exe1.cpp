#include <iostream>
using namespace std;

long long func(int i) {
  if(i == 0) return 0;
  else if(i == 1) return 0;
  else if(i == 2) return 1;

  return func(i -1) + func(i -2) + func(i - 3);
}

int main() {
  int N;
  cout << "トリボナッチ数列の個数Nを入力してください" << endl;
  cin >> N;

  cout << func(N - 1) << endl;
}