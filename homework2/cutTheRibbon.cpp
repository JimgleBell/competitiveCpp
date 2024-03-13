#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int k = 0;
  int n, a, b, c;
  cin >> n >> a >> b >> c;
  vector<int> myVector = {a, b, c}, solutions = {};

  sort(myVector.begin(), myVector.end());
  int resA = n % myVector[0];
  int resC = n % myVector[2];

  if (resA == 0) {
    solutions.push_back(n / myVector[0]);
  }
  for (int i = 0; i < trunc(n / myVector[0]) + 1; i++) {
    for (int j = 0; j < trunc(n / myVector[1]) + 1; j++) {
      // cout << i << j << k << endl;
      if (n == i * myVector[0] + j * myVector[1]) {
        solutions.push_back(i + j);
      } else if ((n - i * myVector[0] - j * myVector[1]) % myVector[2] == 0 &&
                 (n - i * myVector[0] - j * myVector[1]) > 0) {
        k = (n - i * myVector[0] - j * myVector[1]) / myVector[2];
        solutions.push_back(
            i + j + (n - i * myVector[0] - j * myVector[1]) / myVector[2]);
        // cout << i << j << k << endl;
      }
    }
  }

  cout << *max_element(solutions.begin(), solutions.end());
}