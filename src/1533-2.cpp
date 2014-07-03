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
//		int a[n], dp[n], res = INT_MIN;
//		memset(dp, 0, sizeof(dp));
//		for (int i = 0; i < n; i++) {
//			scanf("%d", &a[i]);
//			if (i == 0) {
//				dp[i] = a[i];
//				res = 1;
//			} else {
//				if (a[i] > dp[res - 1]) {
//					res++;
//					dp[res - 1] = a[i];
//				} else {
//					int *p = lower_bound(dp, dp + res, a[i]);
//					*p = a[i];
//				}
//			}
//		}
//		printf("%d\n", res);
//	}
//	return 0;
//}
