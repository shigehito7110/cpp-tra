#include <iostream>
using namespace std;

void func(long long k, long long i, int f, long long &result) {
  if(i > k) return;
  if(f == 0b111) result++;

  func(k, i * 10 + 7, f | 0b100, result);
  func(k, i * 10 + 5, f | 0b010, result);
  func(k, i * 10 + 3, f | 0b001, result);
}

int main() {
  long long K;
  cout << "最大値Kを入力してください" << endl;
  cin >> K;

  long long result = 0;

  func(K, 0, 0, result);
  cout << K << "以下の753数の個数は" << result << endl;
}
