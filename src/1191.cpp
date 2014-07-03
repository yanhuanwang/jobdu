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
//bool cmp(string a, string b) {
//	if (a.size() == b.size()) {
//		return a < b;
//	}
//	return a.size() < b.size();
//}
//int main() {
//	int m, n;
//	while (cin >> m >> n) {
//		int a[m][n], res = INT_MIN, sum = 0, k;
//		for (int i = 0; i < m; i++) {
//			sum = 0;
//			res = INT_MIN;
//			k = 0;
//			for (int j = 0; j < n; j++) {
//				cin >> a[i][j];
//				sum += a[i][j];
//				if (a[i][j] > res) {
//					res = a[i][j];
//					k = j;
//				}
//			}
//			a[i][k] = sum;
//		}
//		for (int i = 0; i < m; i++) {
//			cout << a[i][0];
//			for (int j = 1; j < n; j++) {
//				cout << ' ' << a[i][j];
//			}
//			cout << endl;
//		}
//	}
//	return 0;
//}
