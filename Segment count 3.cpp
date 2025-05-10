
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
	long long n, s;
	cin >> n >> s;
	vector<int> a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	long long sum = 0;
	int l = 0;
	long long cnt = 0;
	long long res = 0;
	map<int, int>mp;
	for (int r = 0; r < n; r++) {
		mp[a[r]]++;
		if (mp[a[r]] == 1) {
			cnt++;
		}
		while (cnt > s) {
			if (mp[a[l]] == 1) {
				cnt--;
			}
			mp[a[l]]--;
			l++;
		}
		res += (r - l + 1);
	}
	cout << res;
}

