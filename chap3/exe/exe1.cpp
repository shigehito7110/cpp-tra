#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N, v;
  cin >> N >> v;

  vector<int> a(N);
  for(int i = 0; i < N; i++) cin >> a[i];

  // bool result = false;
  int id = -1;
  for(int i = 0; i < N; i++) {
    if(v == a[i]) {
      // result = true;
      id = i;
    }
  }

  // if(result) cout << "Yes" << endl;
  // else cout << "No" << endl;

  cout << id << endl;
}