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
//float get1(int a) {
//	/*
//	 * 90！！100 4.0
//	 85！！89 3.7
//	 82！！84 3.3
//	 78！！81 3.0
//	 75！！77 2.7
//	 72！！74 2.3
//	 68！！71 2.0
//	 64！！67 1.5
//	 60！！63 1.0
//	 60參和 0
//	 */
//	if (a >= 90 && a <= 100) {
//		return 4.0;
//	}
//	if (a >= 85) {
//		return 3.7;
//	}
//	if (a >= 82) {
//		return 3.3;
//	}
//	if (a >= 78) {
//		return 3.0;
//	}
//	if (a >= 75) {
//		return 2.7;
//	}
//	if (a >= 72) {
//		return 2.3;
//	}
//	if (a >= 68) {
//		return 2.0;
//	}
//	if (a >= 64) {
//		return 1.5;
//	}
//	if (a >= 60) {
//		return 1.0;
//	}
//	return 0;
//}
//int main() {
//	int n;
//	while (cin >> n) {
//		int a[n], b[n], s2=0;
//		for (int i = 0; i < n; i++) {
//			cin >> a[i];
//			s2 += a[i];
//		}
//		for (int i = 0; i < n; i++) {
//			cin >> b[i];
//		}
//		float c[n], s1 = 0;
//		for (int i = 0; i < n; i++) {
//			c[i] = get1(b[i]) * a[i];
//			s1 += c[i];
//		}
////		cout << s1 << ' ' << s2 << endl;
//		printf("%.2f\n", s1 / s2);
//	}
//	return 0;
//}
