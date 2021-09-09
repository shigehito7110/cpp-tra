#include <iostream>
#include <vector>
using namespace std;
const int INF = 2000000;

// 二番目に小さい数値を見つけ出すアルゴリズム 計算量N
int main() {
  int N;
  cout << "Nの値を入力してください" << endl;
  cin >> N;
  vector<int> a(N);
  cout << N << "個の数値を入力してください" << endl;
  for(int i = 0; i < N; i++) cin >> a[i];

  vector<int> min(2);
  min[1] = INF;
  min[2] = INF;
  // for(int i = 0; i < N; i++) {
  //   if(min[1] > a[i]) {
  //     min[2] = min[1];
  //     min[1] = a[i];
  //     continue;
  //   }

  //   if(min[2] > a[i]) {
  //     min[2] = a[i];
  //   }
  // }

  for(int i = 0; i < N; i++) {
    if(min[1] > a[i]) {
      min[2] = min[1];
      min[1] = a[i];
    } else if(min[2] > a[i]) min[2] = a[i];
  }

  cout << min[2] << endl;
}