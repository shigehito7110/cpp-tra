#include <iostream>
#include <vector>
using namespace std;
const int INF = 200000000;

// 整数群を2で割り切れる回数を求めるアルゴリズム
// 再帰なしver
int main() {
  int N;
  cout << "整数Nを入力してください" << endl;
  cin >> N;

  vector<int> a(N);
  cout << N << "個の整数を入力してください" << endl;
  for(int i = 0; i < N; i++) cin >> a[i];

  int result = INF;
  for(int i = 0; i < N; i++) {
    int N = a[i];
    int amount = 0;
    for(;;) {
      if(N == 0) break;
      if(N % 2 != 0) break;

      N /= 2;
      amount++;
    }

    if(result > amount) result = amount;
  }

  cout << "整数群の2で割り切れる最小回数は" << result << endl;
}