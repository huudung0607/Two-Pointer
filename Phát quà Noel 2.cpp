
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
	long long l = 0;
	long long ans = INT_MAX;
	for (long long r = 0; r < n; r++) {
		sum += a[r];
		while (sum >= s) {
			ans = min(ans, r - l + 1);
			sum -= a[l];
			l++;
		}
	}
	if (ans != INT_MAX) cout << ans;
	else cout << -1;	
}

