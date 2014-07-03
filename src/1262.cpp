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
//void printArr(int a[], int prev[], int k) {
//	if (prev[k] == -1) {
//		cout << a[k];
//	} else {
//		printArr(a, prev, prev[k]);
//		cout << ' ' << a[k];
//	}
//}
//int main() {
//	int n;
//	while (cin >> n) {
//		int a[n];
//		for (int i = 0; i < n; i++) {
//			cin >> a[i];
//		}
//		int dp[n], prev[n];
//		memset(prev, -1, sizeof(prev));
//		memset(dp, 0, sizeof(dp));
//		for (int i = 0; i < n; i++) {
//			dp[i] = 1;
//			prev[i] = -1;
//			for (int j = 0; j < i; j++) {
//				if (dp[j] >= dp[i] && a[j] < a[i]) {
//					dp[i] = dp[j] + 1;
//					prev[i] = j;
//				}
//			}
//		}
//		int res = INT_MIN, k = -1, l = 0;
//		for (int i = 0; i < n; i++) {
//			if (dp[i] > res) {
//				res = dp[i];
//				k = prev[i];
//				l = i;
//			}
//		}
//		if (res != 1) {
//			printArr(a, prev, k);
//			cout << ' ' << a[l] << endl;
//		} else {
//			cout << a[l] << endl;
//		}
//
//	}
//	return 0;
//}
