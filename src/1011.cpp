//#include <cstdio>
//#include <cstdlib>
//#include <algorithm>
//#include <string>
//#include <string.h>
//#include <map>
////#include <unordered_map>
////#include <unordered_set>
//#include <set>
//#include <vector>
//#include <cmath>
//#include <climits>
//#include <queue>
//#include <stack>
//#include <cassert>
//#include <iostream>
//#include <sstream>
//#include <utility>
//#include <bitset>
//using namespace std;
//vector<string> Tokenize(string s, string ch) {
//	vector<string> ret;
//	for (int p = 0, p2; p < s.size(); p = p2 + 1) {
//		p2 = s.find_first_of(ch, p);
//		if (p2 == -1)
//			p2 = s.size();
//		if (p2 - p > 0)
//			ret.push_back(s.substr(p, p2 - p));
//	}
//	return ret;
//}
//int main() {
//	int n;
//	while (cin >> n) {
//		if (!n) {
//			break;
//		}
//		int a[n];
//		for (int i = 0; i < n; i++) {
//			cin >> a[i];
//		}
//		int dp[n], b[n];
//		for (int i = 0; i < n; i++) {
//			if (i == 0) {
//				dp[i] = a[i];
//				b[i] = a[0];
//			} else if (dp[i - 1] >= 0) {
//				dp[i] = dp[i - 1] + a[i];
//				b[i] = b[i - 1];
//			} else {
//				dp[i] = a[i];
//				b[i] = a[i];
//			}
//		}
//		int res = a[0], first = a[0], last = a[0];
//		for (int i = 1; i < n; i++) {
//			if (dp[i] > res) {
//				res = dp[i];
//				first = b[i];
//				last = a[i];
//			}
//		}
//		if (res < 0) {
//			cout << 0 << ' ' << a[0] << ' ' << a[n - 1] << endl;
//		} else
//			cout << res << ' ' << first << ' ' << last << endl;
//	}
//	return 0;
//}
