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
//	string s;
//	while (cin >> s) {
//		/*dp[i][j]=max(dp[i+1][j],dp[i][j-1])
//		 *if s[i]==s[j]&&dp[i+1][j-1]==true, then dp[i][j]=true
//		 *
//		 * */
//		int n = s.size();
//		int dp[n][n], res = 1;
//		memset(dp, 0, sizeof(dp));
//		for (int i = 0; i < n; i++) {
//			dp[i][i] = 1;
//			for (int j = i - 1; j >= 0; j--) {
//				if ((i - j < 2 && s[i] == s[j])
//						|| (s[i] == s[j] && dp[j + 1][i - 1])) {
//					dp[j][i] = 1;
//					res = max(res, i - j + 1);
//				}
//			}
//		}
//		cout << res << endl;
//	}
//	return 0;
//}
