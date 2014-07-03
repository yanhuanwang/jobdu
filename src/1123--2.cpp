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
//	int T, M;
////	int n, m;
//	while (cin >> T >> M) {
//		int time[M], p[M];
//		for (int i = 0; i < M; i++) {
//			cin >> time[i] >> p[i];
//		}
////		int dp[T + 1][M + 1];
////		memset(dp, 0, sizeof(dp));
////		//dp[i][j]=max{dp[i][j-1],dp[i-time[j]][j-1]+p[j]}
////		for (int i = 0; i <= T; i++) {
////			for (int j = 1; j <= M; j++) {
////				if (time[j-1] <= i) {
////					dp[i][j] = max(dp[i][j - 1], dp[i - time[j-1]][j - 1] + p[j-1]);
////				} else {
////					dp[i][j]=dp[i][j-1];
////				}
////			}
////		}
//		int dp[T + 1];
//		memset(dp,0,sizeof(dp));
//		for (int i = 0; i < M; i++) {
//			for (int j = T; j >= 0; j--) {
//				//dp[j]=max(dp[j],dp[j-time[i]]+p[i])
//				if (j >= time[i]) {
//					dp[j] = max(dp[j], dp[j - time[i]] + p[i]);
//				} else {
////				dp[j]
//				}
//			}
//		}
//		cout << dp[T] << endl;
//	}
//	return 0;
//}
