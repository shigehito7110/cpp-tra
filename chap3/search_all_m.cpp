#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N;
  cin >> N;

  vector<int> a(N);
  for(int i = 0; i < N; i++) cin >> a[i];

  int result = a[0];

  for (int i = 1; i < N; i++) {
    if(result > a[i]){
      result = a[i];
    }
  }

  cout << result << endl;
}