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
//int main() {
//	int n;
//	string s;
//	while (cin >> n) {
//		cin >> s;
//		int dp[n][n], res = 0, cnt = 1;
//		memset(dp, 0, sizeof(dp));
//
//		for (int i = 0; i < n; i++) {
//			stack<int> sk;
//			for (int j = 0; j < i; j++) {
//				if (s[j] == '(') {
//					sk.push(j);
//				} else {
//					if (!sk.empty() && s[sk.top()] == '('
//							&& (j - sk.top() < 2 || dp[sk.top() + 1][j - 1])) {
//						dp[sk.top()][j] = 1;
//						sk.pop();
//					} else {
//
//					}
//				}
//			}
//		}
//
//	}
//	return 0;
//}
