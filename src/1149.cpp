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
//	string s, t;
//	while (cin >> s) {
//		set<string> visited;
//		map<string, int> m;
//		for (int i = 0; i < s.size(); i++) {
//			for (int j = 1; j <= s.size() - i; j++) {
//				t = s.substr(i, j);
//				if (!visited.count(t)) {
////					cout << "t= " << t << endl;
//					visited.insert(t);
//					int p = s.find(t, 0);
//					while (p != -1) {
//						m[t]++;
//						p = s.find(t, p + 1);
//					}
//				}
//			}
//		}
//		for (map<string, int>::iterator it = m.begin(); it != m.end(); it++) {
//			if (it->second > 1)
//				cout << it->first << ' ' << it->second << endl;
//		}
//	}
//	return 0;
//}
