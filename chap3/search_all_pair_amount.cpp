#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N, W;

  cout << "整数群の個数を入力してください" << endl;
  cin >> N;

  cout << "解となる整数を入力してください" << endl;
  cin >> W;

  vector<int> a(N);
  cout << "整数群の値を" << N << "個入力してください" << endl;
  for(int i = 0; i < N; i++) cin >> a[i];

  bool result = false;
  for(int bit = 0; bit < (1 << N); bit++) {
    // bitは0, 01, 10, 11...のように増加するので全ての値を網羅することができる。
    int sum = 0;
    for (int i = 0; i < N; i++) {
      // 1 << iも0, 01, 10, 11..のように増加するので全てのパターンをbitに含まれるか判定できる
      if(bit & (1 << i)) {
        sum += a[i];
      }
    }

    if(sum == W) result = true;
  }

  if(result) cout <<"Yes" << endl;
  else cout << "No" << endl;
}