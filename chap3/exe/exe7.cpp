#include <iostream>
using namespace std;

int main() {
  string S;
  cout << "文字列Sを入力してください" << endl;
  cin >> S;

  int N = S.size();

  long long result = 0;
  for (int bit = 0; bit < (1 << (N -1)); bit++) {
    long long tmp = 0;

    // Sの全ての桁の数値をループ
    for(int i = 0; i < (N -1); i++) {

      // 10をかけることで1つ上の桁がtmpに入っていた場合に10倍し、0だった場合変動なくしている。 tmp = 1, => 10 + 2 => 12
      tmp *= 10;
      tmp += S[i] - '0';

      // 現在のbitパターン(+を入れる125なら１,2,5の間の00 => 125, 01 => 12 + 5, 10 => 1+ 25, 11 => 1 + 2 + 5のどれか)を満たしている
      if(bit & (1 << i)) {
        result += tmp;
        tmp = 0;
      }
    }

    // Sの最小の桁は最後に足す。上のifに引っかからなかった場合はtmpに1つ上以上の桁の数値が入っている。 result = 125 => tmp = 12
    // tmp = 12 * 10
    // tmp += 5 => 125
    tmp *= 10;
    tmp += S.back() -'0';
    result += tmp;
  }

  cout << result << endl;
}