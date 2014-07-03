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
//
//vector<int> TokenizeInt(string s, string ch) {
//	vector<int> ret;
//	vector<string> p = Tokenize(s, ch);
//	for (int i = 0; i < p.size(); i++)
//		ret.push_back(atoi(p[i].c_str()));
//	return ret;
//}
//int main() {
//	int n;
//	cin>>n;
//	string s;
//	while (n--) {
//		cin >> s;
//		vector<int> vi = TokenizeInt(s, ".");
//		if (vi.size() != 4) {
//			cout << "No!" << endl;
//			continue;
//		}
//		for (int i = 0; i < 4; i++) {
//			if (vi[i] < 0 || vi[i] > 255) {
//				cout << "No!" << endl;
//				goto out;
//			}
//		}
//		cout << "Yes!" << endl;
//		out: ;
//	}
//	return 0;
//}
