#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, idx;
  cin >> n >> idx;

  vector<int> vec = {0, 0, 0};
  vec[idx] = 1;

  for (int i = n % 6; i > 0; i--) {
    if (i % 2 == 0) {
      swap(vec[2], vec[1]);
    } else
      swap(vec[1], vec[0]);
  }
  for (int i = 0; i < 3; i++) {
    if (vec[i] == 1) {
      idx = i;
    }
  }
  cout << idx;
}
