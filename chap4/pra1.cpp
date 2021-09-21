#include <iostream>
using namespace std;

int func(int num) {
  if(num == 0) return 0;
  return num + func(num -1);
}

int main() {
  int N;
  cout << "最大数Nを入力してください" << endl;
  cin >> N;

  int result = 0;
  result = func(N);
  cout << "0 ~ " << N << "までの合計値は" << result << endl;
}