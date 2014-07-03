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
//int a[26];
//bool check(string s) {
////	bool res = true;
//	memset(a, 0, sizeof(a));
//	for (int i = 0; i < s.size(); i++) {
//		a[s[i] - 'a']++;
//		if (a[s[i] - 'a'] > 1) {
//			return false;
//		}
//	}
//	return true;
//}
//int main() {
//	string s;
//	while (cin >> s) {
//		int n = s.size();
//		int dp[n], res = 1;
//		memset(dp, 0, sizeof(dp));
//		dp[0] = 1;
//		for (int i = 1; i < n; i++) {
//			dp[i] = 1;
//			for (int j = i - 1; j >= 0; j--) {
//				string t = s.substr(j, i - j + 1);
//				if (check(t)) {
//					dp[i] = t.size();
//				} else {
//					break;
//				}
//			}
//			dp[i] = max(dp[i], dp[i - 1]);
//			res = max(res, dp[i]);
//		}
//		cout << res << endl;
//	}
//	return 0;
//}
