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
//	int m, n;
//	while (cin >> m >> n) {
//		int a[m][m];
//		for (int i = 0; i < m; i++) {
//			for (int j = 0; j < m; j++) {
//				cin >> a[i][j];
//			}
//		}
//		int res = INT_MAX, sum = 0;
//		for (int i = 0; i < m - n + 1; i++) {
//			for (int j = 0; j < m - n + 1; j++) {
//				sum = 0;
//				for (int k = i; k < i + n; k++) {
//					for (int l = j; l < j + n; l++) {
//						sum += a[k][l];
//					}
//				}
//				res = min(res, sum);
//			}
//		}
//		cout<<res<<endl;
//	}
//	return 0;
//}
