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
//	int T;
//	cin >> T;
//	int n, m;
//	while (T--) {
//		cin >> n >> m;
//		int p[m + 1], h[m + 1], c[m + 1];
//		for (int i = 1; i <= m; i++) {
//			cin >> p[i] >> h[i] >> c[i];
//		}
////		int dp[n + 1][m + 1];
////		//dp[i][j]=max(dp[i-p(j)*k][j-1]+h(j)*k|k<=c(j)&&p(j)*k<=i
////		memset(dp, 0, sizeof(dp));
////		for (int i = 0; i <= n; i++) {
////			for (int j = 1; j <= m; j++) {
////				dp[i][j]=INT_MIN;
////				for (int k = 0; k <= c[j] && p[j] * k <= i; k++) {
////					dp[i][j] = max(dp[i][j], dp[i - p[j] * k][j - 1]+h[j]*k);
//////					dp[i][j] = max(dp[i][j], res);
////				}
////			}
////		}
//		int dp[n + 1];
//		memset(dp, 0, sizeof(dp));
//		for (int i = 1; i <= m; i++) {
//			for (int j = n; j >= 0; j--) {
//				for (int k = 0; k <= c[i] && p[i] * k <= j; k++) {
//					dp[j] = max(dp[j],dp[j - p[i] * k] + h[i] * k);
//				}
//			}
//		}
//		cout << dp[n] << endl;
//	}
//	return 0;
//}
