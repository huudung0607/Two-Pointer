
#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <cmath>
#include <numeric>
#include <climits>
#include <iomanip>
#include <string>
#include <sstream>
#include <queue>
#include <stack>
#include <unordered_map>
using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;
	vector<int> a(n);
	multiset<int> se;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int l = 0;
	int ans = 0;
	for (int r = 0; r < n; r++) {
		se.insert(a[r]);
		while (*se.rbegin() - *se.begin() > k) {
			auto it = se.find(a[l]);
			se.erase(it);
			l++;
		}
		ans += r - l + 1;
	}
	cout << ans;
}

