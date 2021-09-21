#include <iostream>
#include <vector>
using namespace std;

vector<long long> memo;

long long func(int n) {
  if(n == 0) return 0;
  else if(n == 1) return 1;

  if(memo[n] != -1) return memo[n];

  return memo[n] = func(n -1) + func(n - 2);
}

int main() {
  long long N;
  cout << "数値Nを入力してください" << endl;
  cin >> N;

  memo.assign(N, -1);

  int result = 0;
  result = func(N - 1);
  cout << N << "項目は" << result << endl;
}
