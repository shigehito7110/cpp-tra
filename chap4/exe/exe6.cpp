#include <iostream>
#include <vector>
using namespace std;

vector<vector<int> > memo;

int func(int w, int n, const vector<int> &a) {
  if(n == 0) {
    if(w == 0) return true;
    return false;
  }

  if(w == a[n]) return true;

  if(memo[n][w] != -1) return memo[n][w];

  if(func(w, n - 1, a)) return memo[n][w] = 1;
  if(func(w - a[n - 1], n - 1, a)) return memo[n][w] = 1;

  return memo[n][w] = 0;
}

int main() {
  int N, W;
  cout << "整数群の個数Nを入力してください" << endl;
  cin >> N;
  cout << "部分和Wを入力してください" << endl;
  cin >> W;

  vector<int> a(N);
  cout << N << "個の整数群の値を入力してください" << endl;
  for(int i = 0; i < N; i++) cin >> a[i];

  memo.assign(N + 1, vector<int>(W + 1, -1));

  if(func(W, N, a)) cout << "true" << endl;
  else cout << "false" << endl;
}
