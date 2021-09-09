#include <iostream>
#include <vector>
using namespace std;
// const int MAX = 200000;
// const int MIN = -1;
const int INF = 200000000;

// 整数群の2つの数の差で一番大きい値を求めるアルゴリズム
int main() {
  int N;
  cout << "Nの値を入力してください" << endl;
  cin >> N;

  vector<int> a(N);
  for(int i = 0; i < N; i++) cin >> a[i];

  // int min = MAX;
  // int max = MIN;
  int min = INF;
  int max = -INF;

  for(int i = 0; i < N; i++) {
    if(min > a[i]) min = a[i];
    if(max < a[i]) max = a[i];
  }

  int result = max - min;
  cout << result << endl;
}