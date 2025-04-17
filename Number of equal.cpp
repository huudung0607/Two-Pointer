
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
	vector<long long> a(n), b(m);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < m; i++)
	{
		cin >> b[i];
	}
	int i = 0, j = 0;
	long long cnt = 0;
	while (i < n && j < m) {
		if (a[i] == b[j]) {
			long long val = a[i];
			long long cnt1 = 0, cnt2 = 0;
			while (i < n && a[i] == val) {
				cnt1++;
				i++;
			}
			while (j < m && b[j] == val) {
				cnt2++;
				j++;
			}
			cnt += cnt1 * cnt2;
		}
		else if (a[i] > b[j]) {
			j++;
		}
		else
		{
			i++;
		}
	}
	cout << cnt;
}

