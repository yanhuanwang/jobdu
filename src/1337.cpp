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
//int dx[] = { 1, -1, 0, 0 };
//int dy[] = { 0, 0, 1, -1 };
//int main() {
//	int n;
//	string s;
//	while (cin >> n) {
//		cin >> s;
//		int dp[n][n], res = 0, cnt = 1;
//		memset(dp, 0, sizeof(dp));
//		for (int i = 0; i < n; i++) {
//			if (s[i] == '(' && s[i + 1] == ')') {
//				dp[i][i + 1] = 1;
//			}
//			for (int j = i - 1; j >= 0; j--) {
//				if (i - j < 2 && s[j] == '(' && s[i] == ')') {
//					dp[j][i] = 1;
////					res = max(res, i - j + 1);
//					if (i - j + 1 > res) {
//						res = i - j + 1;
//						cnt = 1;
//					} else if (i - j + 1 == res) {
//						cnt++;
//					}
//					continue;
//				}
//				if (dp[j + 1][i - 1] && s[j] == '(' && s[i] == ')') {
//					dp[j][i] = 1;
//					if (i - j + 1 > res) {
//						res = i - j + 1;
//						cnt = 1;
//					} else if (i - j + 1 == res) {
//						cnt++;
//					}
//					continue;
//				}
//				if (s[j] == '(' && s[j + 1] == ')' && dp[j + 2][i]) {
//					dp[j][i] = 1;
//					if (i - j + 1 > res) {
//						res = i - j + 1;
//						cnt = 1;
//					} else if (i - j + 1 == res) {
//						cnt++;
//					}
//					continue;
//				}
//				if (dp[j][i - 2] && s[i - 1] == '(' && s[i] == ')') {
//					dp[j][i] = 1;
//					if (i - j + 1 > res) {
//						res = i - j + 1;
//						cnt = 1;
//					} else if (i - j + 1 == res) {
//						cnt++;
//					}
//					continue;
//				}
//			}
//		}
//		cout<<res<<' '<<cnt<<endl;
////		stack<int> sk;
////		for (int i = 0; i < n; i++) {
////			if (s[i] == '(') {
////				sk.push(i);
////			}
////		}
//
//	}
//	return 0;
//}
