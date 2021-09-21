#include <iostream>
#include <vector>
using namespace std;

// exe1.cppのキャッシュ化
long long func(int i, vector<long long> &memo) {
  if(i == 0) return 0;
  else if(i == 1) return 0;
  else if(i == 2) return 1;

  if(memo[i] != -1) return memo[i];

  return memo[i] = func(i - 1, memo) + func(i - 2, memo) + func(i - 3, memo);
}

int main() {
  int N;
  cout << "トリボナッチ数列の個数Nを入力して下さい" << endl;
  cin >> N;

  vector<long long> memo(N);
  memo.assign(N, -1);
  cout << func(N - 1, memo) << endl;
}
