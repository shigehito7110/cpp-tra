#include <iostream>
#include <vector>
using namespace std;


// 線形探索アルゴリズム(全検索)
int main() {
  int N, v;
  cout << "整数群の個数を選択してください" << endl;
  cin >> N;
  cout << "検証する数値を選択してください" << endl;
  cin >> v;

  vector<int> a(N);

  cout << N << "個の整数群の数値を入力してください" << endl;
  for (int i = 0; i < N; i++) cin >> a[i];

  bool result = false;
  for (int i = 0; i < N; i++) {
    if (a[i] == v) {
      result = true;
    }
  }

  if(result) cout << "ありました！" << endl;
  else cout << "なかったです。。。" << endl;
}