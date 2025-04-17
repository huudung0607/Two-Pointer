
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
	vector<int> a(n), b(m);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < m; i++) {
		cin >> b[i];
	}
	vector<int> c(n + m);
	int i = 0, j = 0;
	int index = 0;
	while (i < n && j < m) {
		if (a[i] <= b[j]) {
			c[index++] = a[i++];
		}
		else if (a[i] >= b[j]) {
			c[index++] = b[j++];
		}
	}
	while (i < n) {
		c[index++] = a[i++];
	}
	while (j < m) {
		c[index++] = b[j++];
	}
	for (auto x : c) {
		cout << x << " ";
	}
}

