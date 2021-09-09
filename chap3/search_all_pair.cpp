#include <iostream>
#include <vector>
using namespace std;
const int INF = 2000000;

int main() {
  cout << "整数群の個数Nと最低限の整数Kを選択してください。" << endl;
  int N, K;
  cin >> N >> K;

  vector<int> a(N), b(N);
  cout << "整数群のa値を" << N << "個選択してください。" << endl;
  for(int i = 0; i < N; i++) cin >> a[i];
  cout << "整数群のb値を" << N << "個選択してください。" << endl;
  for(int i = 0; i < N; i++) cin >> b[i];

  int result = INF;

  // for (int i = 0; i < N; i++) {
  //   for (int f = 0; f < N; f++) {
  //     int current_num = a[i] + b[f];
  //     if(current_num > K && current_num < result) {
  //       result = current_num;
  //     }
  //   }
  // }

  for (int i = 0; i < N; i++) {
    for (int f = 0; f < N; f++) {
      if(a[i] + b[f] < K) continue;
      if (a[i] + b[f] < result) result = a[i] + b[f];
    }
  }

  cout << K << "以上で最低値の和は" << result << "です。" << endl;
}