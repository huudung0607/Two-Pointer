
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
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	unordered_map<int, int> mp;
	vector<pair<int,int>> res;
	for (int i = 0; i < n; i++)
	{
		int val = k - a[i];
		if (mp.find(val) != mp.end()) {
			res.push_back({ mp[val],i });
		}
		mp[a[i]] = i;
	}
	for (auto x : res) {
		cout << x.first << " " << x.second << endl;
	}
}

