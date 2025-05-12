
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
	string s;
	cin >> s;
	int x, y;
	cin >> x >> y;
	int l = 0;
	int cnt2 = 0, cnt8 = 0;
	int ans = 0;
	for (int r = 0; r < s.size(); r++) {
		if (s[r] == '2') cnt2++;
		if (s[r] == '8') cnt8++;
		while (cnt2 > x || cnt8 > y) {
			if (s[l] == '2') {
				cnt2--;
			}
			else if (s[l] == '8') {
				cnt8--;
			}
			l++;
		}
		ans = max(ans, r - l + 1);
	}
	cout << ans;
}

