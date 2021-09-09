#include <iostream>
#include <vector>
using namespace std;

// 0 ~ Kの整数のうち、合計でNになる3つの整数の組み合わせの個数を求めるアルゴリズム N^2
int main() {
  int K, N;
  cout << "整数群の上限Kを入力してください" << endl;
  cin >> K;
  cout << "整数群の部分和Nを入力してください" << endl;
  cin >> N;

  int count = 0;
  for(int x = 0; x <= K; x++) {
    for(int y = 0; y <= K; y++) {
      int z = N - (x + y);
      if(z >= 0 && z <= K) count++;
    }
  }

  cout << count << endl;
}
