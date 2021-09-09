#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N, v;
  cin >> N >> v;
  vector<int> a(N);

  for (int i = 0; i < N; i++) cin >> a[i];

  int id = -1;
  for (int i = 0; i < N; i++) {
    if(a[i] == v) {
      id = i;
      break;
    }
  }

  if(id != -1) cout << id + 1 << "番目が" << v << "と一致しています。" << endl;
  else cout << v << "と一致する値はありませんでした。" << endl;
}
