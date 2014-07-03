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
//	while (cin >> n) {
//		int a[n][n];
//		for (int i = 0; i < n; i++) {
//			for (int j = 0; j < n; j++) {
//				cin >> a[i][j];
//			}
//		}
//		int dp[n], p[n], b[n], res = INT_MIN, startx, starty, endx, endy;
//		memset(dp, 0, sizeof(dp));
//		for (int i = 0; i < n; i++) {
////			for (int j = 0; j < n; j++) {
//			for (int k = 0; k <= i; k++) {
//				memset(p, 0, sizeof(p));
//				memset(b, 0, sizeof(b));
//				for (int j = 0; j < n; j++) {
//					for (int l = k; l <= i; l++) {
//						p[j] += a[l][j];
//					}
//
//					if (j > 0) {
//						if (dp[j - 1] > 0) {
//							dp[j] = dp[j - 1] + p[j];
//							b[j] = b[j - 1];
//						} else {
//							dp[j] = p[j];
//							b[j] = j;
//						}
//					} else {
//						dp[j] = p[j];
//						b[j] = j;
//					}
//					if (dp[j] > res) {
//						res = dp[j];
//						startx = k;
//						starty = b[j];
//						endx = i;
//						endy = j;
//					}
//				}
//			}
////			}
//		}
//		cout << res << endl;
////		cout << startx << ' ' << starty << ' ' << endx << ' ' << endy << endl;
//	}
//	return 0;
//}
