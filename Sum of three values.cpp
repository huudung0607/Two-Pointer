
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
	int n, m;
	cin >> n >> m;
	vector<int> a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	vector<pair<pair<int, int>, int>> v;
	for (int i = 0; i < n; i++) {
		int j = i + 1, k = n - 1;
		if (i > 0 && a[i] == a[i - 1])
			continue;
		while (j < k) {
			int total = a[i] + a[j] + a[k];
			if (total == m) {
				cout << "YES";
				return 0;
				v.push_back({ {a[i],a[j]},a[k] });
				j++;
				while (a[j] == a[j - 1] && j < k) {
					j++;
				}
			}
			else if (total < m) {
				j++;
			}
			else k--;
		}
	}
	cout << "NO";
}

