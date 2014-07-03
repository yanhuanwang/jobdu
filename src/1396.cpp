//#include<iostream>
//#include<vector>
//#include<string.h>
//#include<algorithm>
//using namespace std;
//int get(int a, int b, int c) {
//	int x = a * b;
//	int y = a * c;
//	int n1 = 0, n2 = 0;
//	while (x % 10 == 0) {
//		n1++;
//		x /= 10;
//	}
//	while (y % 10 == 0) {
//		n2++;
//		y /= 10;
//	}
//	if (n1 > n2) {
//		return a * c;
//	} else {
//		return a * b;
//	}
//}
//int main() {
//	int n;
//	while (cin >> n) {
//		int a[n][n];
//		for (int i = 0; i < n; i++) {
//			for (int j = 0; j < n; j++) {
//				cin >> a[i][j];
////				cout << a[i][j] << ' ';
//			}
//		}
//		int dp[n][n];
//		memset(dp, 0, sizeof(dp));
//		dp[0][0] = a[0][0];
////		cout << dp[0][0] << endl;
//		for (int i = 0; i < n; i++) {
//			for (int j = 0; j < n; j++) {
//				if (i - 1 >= 0 && j - 1 >= 0) {
//					dp[i][j] = get(a[i][j], dp[i - 1][j], dp[i][j - 1]);
//				} else if (i - 1 >= 0) {
////					dp[i][j] = get(a[i][j], dp[i - 1][j]);
//					dp[i][j] = a[i][j] * dp[i - 1][j];
//				} else if (j - 1 >= 0) {
////					dp[i][j] = get(a[i][j], dp[i][j - 1]);
//					dp[i][j] = a[i][j] * dp[i][j - 1];
//				}
////				cout << dp[i][j] << ' ';
//			}
//		}
//		cout << dp[n - 1][n - 1] << endl;
//	}
//	return 0;
//}
