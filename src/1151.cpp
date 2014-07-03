//#include <cstdio>
//#include <cstdlib>
//#include <algorithm>
//#include <string>
//#include <string.h>
//#include <stdlib.h>
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
//	int n, a, b;
//	cin >> n;
//	while (n--) {
//		cin >> a >> b;
//		string x, y;
//		while (a) {
//			if (a & 1) {
//				x = '1' + x;
//			} else {
//				x = '0' + x;
//			}
//			a >>= 1;
//		}
//		while (b) {
//			if (b & 1) {
//				y = '1' + y;
//			} else {
//				y = '0' + y;
//			}
//			b >>= 1;
//		}
//		if (x.size() < y.size()) {
//			x.insert(x.end(), y.size() - x.size(), '0');
//		} else if (x.size() > y.size()) {
//			y.insert(y.end(), x.size() - y.size(), '0');
//		}
////		cout << x << ' ' << y << endl;
//		if (x == y) {
//			cout << "YES" << endl;
//			continue;
//		}
//		int cnt = 0;
//		while (x != y) {
//			char c = y[0];
//			y.erase(y.begin());
//			y += c;
//			cnt++;
//			if (x == y) {
//				cout << "YES" << endl;
//			}
//			if (cnt > x.size()) {
//				cout << "NO" << endl;
//				break;
//			}
//		}
////		itoa(a, &x, 2);
//	}
//	return 0;
//}
