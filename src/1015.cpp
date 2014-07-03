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
//	string a, b;
//	int k;
//	stringstream ss;
//	while (cin >> a >> b >> k) {
//		if (a == "0" && b == "0") {
//			break;
//		}
//		if (a.size() < k) {
//			int c = k - a.size();
//			a.insert(a.begin(), c, '0');
//		}
//		if (b.size() < k) {
//			int c = k - b.size();
//			b.insert(b.begin(), c, '0');
//		}
//		if (a.substr(a.size() - k) == b.substr(b.size() - k)) {
//			cout << -1 << endl;
//		} else {
//			int x = atoi(a.c_str());
//			int y = atoi(b.c_str());
//			cout << x + y << endl;
//		}
//	}
//	return 0;
//}
