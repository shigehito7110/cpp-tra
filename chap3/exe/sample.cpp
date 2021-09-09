#include <iostream>
// #include <vector>
using namespace std;

// // int main() {
// //   int N = 8;

// //   int result = 0;
// //   for(;;) {
// //     if(N == 0) break;
// //     if (N % 2 != 0) break;

// //     N = N / 2;
// //     result++;
// //   }
// //   cout << result << endl;
// // }

// // int main() {
// //   int N = 8;
// //   N /= 2;

// //   cout << N << endl;
// // }

// int main() {
//     string S;
//     cin >> S;
//     int N = S.size();

//     // N-1 箇所の隙間に「+」を入れるかどうかをすべて試す
//     long long res = 0;
//     for (int bit = 0; bit < (1<<(N-1)); ++bit) {
//         // tmp：「+」と「+」との間の値を表す変数
//         long long tmp = 0;
//         for (int i = 0; i < N-1; ++i) {
//             cout << "tmp: " << tmp << endl;
//             tmp *= 10;
//             cout << "tmp *= 10: " << tmp << endl;
//             tmp += S[i] - '0';
//             cout << "tmp += " << S[i] << "- '0': " << tmp << endl;
//             // 「+」を挿入するとき、答えに tmp を加算して、tmp を 0 に初期化
//             if (bit & (1<<i)) {
//                 cout << "resに加える数: " << tmp << endl;
//                 res += tmp;
//                 tmp = 0;
//             }
//             cout << "resに加える数: " << tmp << endl;
//         }

//         // 最後の「+」から残りの部分を答えに加算
//         cout << "最後の+の後の数の10ばいする前" << tmp << endl;
//         tmp *= 10;
//         tmp += S.back() - '0';
//         cout << "最後の+の後の数" << tmp << endl;
//         res += tmp;
//         cout << bit << "回目 res = " << res << "\n" << endl;
//     }
//     cout << res << endl;
// }

int main() {
  string N = "123";
  int tmp = 0;

  int result_a = N.back();
  // なんか-0をつけないと文字列の計算がちゃんとできない。。。
  // - '0'をすると数値として計算してくれる。
  int result_b = N.back() -'0';

  cout << result_a << endl;
  cout << result_b << endl;

  string a = "1";
  char b  = '1';
  cout << 100 + a.back() << endl;
  cout << 100 + b << endl;
}