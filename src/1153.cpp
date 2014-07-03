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
//	string s;
//	while (cin >> s) {
//		stack<pair<char, int> > sk;
//		string res = s;
//		for (int i = 0; i < s.size(); i++) {
//			if (s[i] == ')' && sk.empty()) {
////				res += '?';
//				s.replace(i, 1, "?");
//			} else if (s[i] == '(') {
//				sk.push(make_pair(s[i], i));
//			} else if (s[i] == ')') {
//				s.replace(i, 1, " ");
//				s.replace(sk.top().second, 1, " ");
//				sk.pop();
//			} else {
//				s.replace(i, 1, " ");
//			}
//		}
//		while (!sk.empty()) {
//			s.replace(sk.top().second, 1, "$");
//			sk.pop();
//		}
//		cout << res << endl;
//		cout << s << endl;
//	}
//	return 0;
//}
