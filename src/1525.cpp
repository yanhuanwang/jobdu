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
//vector<string> Tokenize(string s, string ch) {
//
//	vector<string> ret;
//
//	for (int p = 0, p2; p < s.size(); p = p2 + 1) {
//		p2 = s.find_first_of(ch, p);
//
//		if (p2 == -1)
//			p2 = s.size();
//
//		if (p2 - p > 0)
//			ret.push_back(s.substr(p, p2 - p));
//	}
//
//	return ret;
//}
//int main() {
//	string n;
//
//	string s;
//	while (getline(cin, n)) {
//		if (n == "0") {
//			break;
//		}
//		getline(cin, s);
//		vector<string> vs = Tokenize(s, " ");
//		for (int i = 0; i < vs.size(); i++) {
//			reverse(vs[i].begin(), vs[i].end());
//		}
//		string res = vs[0];
//		for (int i = 1; i < vs.size(); i++) {
//			res += ' ';
//			res += vs[i];
//		}
//		if (s[0] == ' ') {
//			res = ' ' + res;
//		}
//		if (s[s.size() - 1] == ' ') {
//			res += ' ';
//		}
//		cout << res << endl;
//	}
//	return 0;
//}
