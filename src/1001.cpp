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
//	int m, n;
//	while (cin >> m >> n) {
//		if (m == 0) {
//			break;
//		}
////		int a[m][n], b[m][n];
//		int c[m][n], t;
//		memset(c, 0, sizeof(c));
//		for (int i = 0; i < m; i++) {
//			for (int j = 0; j < n; j++) {
//				cin >> t;
//				c[i][j] += t;
//			}
//		}
//		for (int i = 0; i < m; i++) {
//			for (int j = 0; j < n; j++) {
//				cin >> t;
//				c[i][j] += t;
//			}
//		}
//		int cnt = 0;
////		bool f = false;
//		for (int i = 0; i < m; i++) {
////			f = true;
//			for (int j = 0; j < n; j++) {
//				if (c[i][j] != 0) {
//					goto out;
////					f = false;
////					break;
//				}
//			}
////			if (f) {
////				cnt++;
////			}
//			cnt++;
//			out: ;
//		}
//		for (int i = 0; i < n; i++) {
//			for (int j = 0; j < m; j++) {
//				if (c[j][i] != 0) {
//					goto out2;
//				}
//			}
//			cnt++;
//			out2: ;
//		}
//		cout << cnt << endl;
//	}
//	return 0;
//}
