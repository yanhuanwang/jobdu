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
//	int T;
//	cin >> T;
//	while (T--) {
//		int n;
//		cin >> n;
//		int a[n];
//		for (int i = 0; i < n; i++) {
//			cin >> a[i];
//		}
//		bool first = false;
//		for (int i = 0; i < n; i++) {
//			if (i == 0 && (a[i] > a[i + 1] || a[i] < a[i + 1])) {
//				cout << i;
//				first = true;
//				continue;
//			}
//			if (i == n - 1 && (a[i] > a[i - 1] || a[i] < a[i - 1])) {
//				if (!first) {
//					cout << i;
//					first = true;
//				} else {
//					cout << ' ' << i;
//				}
//				continue;
//			}
//			if ((a[i] > a[i - 1] && a[i] > a[i + 1])
//					|| (a[i] < a[i - 1] && a[i] < a[i + 1])) {
////				cout << i << ' ';
//				if (!first) {
//					cout << i;
//					first = true;
//				} else {
//					cout << ' ' << i;
//				}
//			}
//		}
//		cout << endl;
//	}
//	return 0;
//}
