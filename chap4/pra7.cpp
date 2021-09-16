#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N;
  cout << "数値の個数Nを入力してください" << endl;
  cin >> N;
  vector<long long> a(N);

  a[1] = 1;
  a[0] = 0;

  int result;
  for (int i = 2; i <= N; i++) {
    result += a[i - 1] + a[i - 2];
  }

  cout << result << endl;
}
