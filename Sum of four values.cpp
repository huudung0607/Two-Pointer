
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
using ll = long long;
int main()
{
	long long n, m;
	cin >> n >> m;
	vector<long long> a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	vector<pair<pair<ll,ll>, pair<ll, ll>>> v;
	sort(a.begin(), a.end());
	for (int i = 0; i < n; i++) {
		if (i > 0 && a[i] == a[i - 1]) continue;
		for (int j = i + 1; j < n - 1; j++) {
			int k = j + 1, l = n - 1;
			if (j > i + 1 && a[j] == a[j - 1]) continue;
			while (k < l) {
				long long sum = a[i] + a[j] + a[k] + a[l];
				if (sum == m) {
					cout << "YES";
					return 0;
					pair<ll, ll> p1 = { a[i],a[j] };
					pair<ll, ll> p2 = { a[k],a[l] };
					v.push_back({ p1,p2 });
					k++;
					l--;
					while (k < l && a[k] == a[k - 1]) {
						k++;
					}
					while (k < l && a[l] == a[l + 1]) {
						l--;
					}
					
				}
				else if (sum < m) {
					k++;
				}
				else l--;
			}
		}
	}
	cout << "NO";
}

