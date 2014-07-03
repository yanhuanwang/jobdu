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
//	int n;
//	string s;
//	while (cin >> n) {
//		cin >> s;
//		stack<int> sk;
//		int a[n];
//		memset(a, 0, sizeof(a));
//		for (int i = 0; i < s.size(); i++) {
//			if (s[i] == '(') {
//				sk.push(i);
//			} else {
//				if (!sk.empty()) {
//					a[i] = 1;
//					a[sk.top()] = 1;
//					sk.pop();
//				}
//			}
//		}
//		int res1 = 0, res = 0, cnt = 1;
//		for (int i = 0; i < n; i++) {
//
//			if (a[i] == 1) {
//				res1++;
//			} else {
//				res1 = 0;
////				cnt = 1;
//			}
////			res = max(res, res1);
//			if (res1 > res) {
//				res = res1;
//				cnt = 1;
//			} else if (res1 == res) {
//				cnt++;
//			}
//		}
//		if(res==0){
//			cnt=1;
//		}
//		cout << res << ' ' << cnt << endl;
//	}
//	return 0;
//}
