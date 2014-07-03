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
//int main() {
//	string s;
//	while (cin >> s) {
//		map<char, vector<int> > m;
//		for (int i = 0; i < s.size(); i++) {
//			m[s[i]].push_back(i);
//		}
//		set<char> visited;
//		for (int i = 0; i < s.size(); i++) {
//			if (visited.count(s[i])) {
//				continue;
//			}
//			if (m[s[i]].size() <= 1) {
//				continue;
//			}
//			cout << s[i] << ':' << m[s[i]][0];
//			for (int j = 1; j < m[s[i]].size(); j++) {
//				cout << ',' << s[i] << ':' << m[s[i]][j];
//			}
//			cout << endl;
//			visited.insert(s[i]);
//		}
////		for (map<char, vector<int> >::iterator it = m.begin(); it != m.end();
////				it++) {
////			if (it->second.size() > 1) {
////				cout << it->first << ':' << it->second[0];
////				for (int i = 1; i < it->second.size(); i++) {
////					cout << ',' << it->first << ':' << it->second[i];
////				}
////				cout << endl;
////			}
////		}
//	}
//	return 0;
//}
