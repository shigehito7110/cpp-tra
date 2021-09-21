#include <iostream>
#include <vector>
using namespace std;

// int main() {
//   int N, W;
//   cout << "整数群の個数Nを入力してください" << endl;
//   cin >> N;
//   cout << "部分和の合計値Wを入力してください" << endl;
//   cin >> W;

//   vector<int> a(N);
//   cout << N << "個の整数群を入力してください" << endl;
//   for(int i = 0; i < N; i++) cin >> a[i];

//   bool result = false;

//   for(int bit = 0; bit < (1 << N); bit++) {
//     int amount = 0;
//     for(int i = 0; i < N; i++) {
//       if(bit & (1 << i)) {
//         amount += a[i];
//       }
//     }

//     if(amount == W) {
//       result = true;
//       break;
//     }
//   }

//   if (result) cout << "あった" << endl;
//   else cout << "なかった" << endl;
// }

// 上の関数を再帰を用いて修正
bool func(int i, int w, const vector<int> &a) {
  if(i == 0) {
    if(w == 0) return true;
    return false;
  }

  if(a[i] == w) return true;

  if(func(i - 1, w, a)) return true;
  else if(func(i - 1, w - a[i - 1], a)) return true;

  return false;
}

int main() {
  int N, W;
  cout << "整数群の個数Nを入力してください" << endl;
  cin >> N;
  cout << "整数群の部分和Wを入力してください" << endl;
  cin >> W;

  vector<int> a(N);
  cout << N << "個の整数群の値を入力してください" << endl;
  for(int i = 0; i < N; i++) cin >> a[i];

  bool result = false;
  result = func(N, W, a);

  if(result) cout << "あった" << endl;
  else cout << "なかった" << endl;
}