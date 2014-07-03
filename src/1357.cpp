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
//struct node {
//	string name;
//	int a, b;
//	bool operator<(const node &t) const {
//		if (a == t.a && b == t.b) {
//			return name < t.name;
//		}
//		if (a == t.a) {
//			return b < t.b;
//		}
//		return a >= t.a;
//	}
//};
//bool cmp(pair<int, int> a, pair<int, int> b) {
//	if (a.second == b.second) {
//		return a.first < b.first;
//	}
//	return a.second > b.second;
//}
//int main() {
//	long long int n;
//	while (scanf("%lld", &n) != EOF) {
//		int a = sqrt(n * 2);
//		if (a * (a + 1) <= n * 2) {
//			while (a * (a + 1) <= n * 2) {
//				if ((a + 1) * (a + 2) > n * 2) {
//					cout << a << endl;
//					break;
//				} else {
//					a++;
//				}
//
//			}
//		} else {
//			while (a * (a + 1) > n * 2) {
//				if ((a - 1) * (a) <= n * 2) {
//					cout << a - 1 << endl;
//					break;
//				} else {
//					a--;
//				}
//			}
//		}
////		cout << a << endl;
//	}
//	return 0;
//}
