#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = int64_t;
using vl = vector<ll>;

ll n;
vl A;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> n;
  while (0 < n) {
    A = vl(n);
    for (auto&& a : A) {
      cin >> a;
    }

    auto ans = ll{0};
    auto now = ll{0};
    for (auto i = 0; i < n; ++i) {
      now += A[i];
      if (3 <= i) {
        now -= A[i - 3];
      }
      ans = max(ans, now);
    }

    cout << ans << '\n';

    cin >> n;
  }

  return 0;
}