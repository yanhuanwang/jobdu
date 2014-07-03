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
//	while (scanf("%d", &n) != EOF) {
//		long long int a[n];
//		memset(a, 0, sizeof(a));
//		for (int i = 0; i < n; i++) {
//			cin >> a[i];
////			scanf("%lld", &a[i]);
////			cout << a[i] << ' ';
//		}
//		long long int dp[n];
//		long long int res = INT_MAX;
//		dp[0] = a[0];
//		res = a[0];
//		for (int i = 1; i < n; i++) {
//			if (abs(dp[i - 1] + a[i]) < abs(a[i])) {
//				dp[i] = dp[i - 1] + a[i];
//			} else {
//				dp[i] = a[i];
//			}
//			if (abs(dp[i]) < abs(res)) {
//				res = dp[i];
//			}
//		}
////		printf("%lld\n", res);
//		cout << res << endl;
//	}
//	return 0;
//}
