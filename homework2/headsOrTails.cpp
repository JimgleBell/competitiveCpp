#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> pairs;

int main() {
  int x, y, a, b;
  vector<pairs> vec;
  cin >> x >> y >> a >> b;

  for (int i = a; i < x + 1; i++) {
    for (int j = b; j < y + 1; j++) {
      if (i > j) {
        vec.push_back(make_pair(i, j));
      }
    }
  }

  sort(vec.begin(), vec.end());

  cout << vec.size() << "\n";

  for (int i = 0; i < vec.size(); i++) {
    cout << vec[i].first << " " << vec[i].second << "\n";
  }
}