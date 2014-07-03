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
//	string s, a, b;
//	while (getline(cin, s)) {
//		getline(cin, a);
//		getline(cin, b);
//
////		cout << s << endl;
////		cout << a << endl;
////		cout << b << endl;
//		int p = s.find(a, 0);
//		if (p == -1) {
//			break;
//		}
//		while (p != -1) {
//			if ((s[p - 1] == ' ' || p < 1)
//					&& (s[p + a.size()] == ' '
//							|| p + a.size()>= s.size())) {
//				s.replace(p, a.size(), b);
//				p = s.find(a, p + 1);
//			} else {
//				p = s.find(a, p + 1);
//			}
//		}
//		cout << s << endl;
//	}
//	return 0;
//}
