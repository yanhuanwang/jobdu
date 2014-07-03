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
//		set<string> visited;
//		int cnt = 0;
//		for (int i = 0; i < s.size(); i++) {
//			for (int j = 1; j < s.size() - i; j++) {
//				string s1 = s.substr(i, j);
//				if (visited.count(s1)) {
//					continue;
//				}
//				string prev = s.substr(0, i);
//				if (prev.find(s1, 0) == -1 && s.find(s1, i + j) == -1) {
//					break;
//				}
//				if ((prev.find(s1, 0) != -1 || s.find(s1, i + j) != -1)) {
//					visited.insert(s1);
//					cnt++;
//				}
//			}
//		}
//		cout << cnt << endl;
//	}
//	return 0;
//}
