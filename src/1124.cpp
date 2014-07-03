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
//	string n;
//	while (cin >> n) {
//		if (n == "0") {
//			break;
//		}
//		int res = 0;
//		for (int i = 0; i < n.size(); i++) {
//			res += n[i] - '0';
//		}
//		int ret = 0;
//		if (res >= 10) {
//			while (res) {
//				ret += res % 10;
//				res /= 10;
//				if (res == 0 && ret >= 10) {
//					res = ret;
//					ret = 0;
//				}
//			}
//			cout << ret << endl;
//		} else {
//			cout << res << endl;
//		}
//	}
//	return 0;
//}
