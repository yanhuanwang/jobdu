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
//
//int main() {
//	int n, c;
//	while (cin >> c >> n) {
//		int price[n], score[n];
//		for (int i = 0; i < n; i++) {
//			cin >> price[i] >> score[i];
//		}
////		int dp[c + 1][n + 1];
////		memset(dp, 0, sizeof(dp));
////		//dp[i][j]=max(dp[i][j-1],dp[i-price[j]*k][j-1]+score[j]*k|k=0...i/price[j])
////		for (int i = 0; i <= c; i++) {
////			for (int j = 1; j <= n; j++) {
//////				for (int k = 0; k * price[j-1] <= i; k++) {
////				if (i >= price[j - 1]) {
////					dp[i][j] = max(dp[i][j - 1],
////							dp[i - price[j - 1]][j - 1] + score[j - 1]);
//////					dp[i][j] = max(dp[i][j], res);
////				} else {
////					dp[i][j] = dp[i][j - 1];
////				}
//////				}
////			}
////		}
////		cout << dp[c][n] << endl;
//		int dp[c + 1];
//		memset(dp, 0, sizeof(dp));
//		for (int i = 1; i <= n; i++) {
//			for (int j = c; j >= 0; j--) {
////dp[i]=max(dp[i],dp[i-price[j]]+score[j])
//				if (j >= price[i - 1]) {
//					dp[j] = max(dp[j], dp[j - price[i - 1]] + score[i - 1]);
//				} else {
//
//				}
//			}
//		}
//		cout << dp[c] << endl;
//	}
//	return 0;
//}
