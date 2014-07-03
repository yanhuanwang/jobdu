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
//	while (scanf("%d", &n) != EOF) {
//		long long int a[n], s[n], res = INT_MAX;
//		memset(a, 0, sizeof(a));
//		memset(s, 0, sizeof(s));
//		for (int i = 0; i < n; i++) {
//			scanf("%lld", &a[i]);
//		}
//		for (int i = 0; i < n; i++) {
////			cin >> a[i];
////			scanf("%lld", &a[i]);
////			cout << a[i] << ' ';
//			s[i] = a[i];
//			long long t = a[i];
//			for (int j = i - 1; j >= 0; j--) {
//				t += a[j];
//				if (abs(t) < abs(s[i])) {
//					s[i] = t;
//				}
//			}
//			if (abs(res) > abs(s[i])) {
//				res = s[i];
//				if (res == 0) {
//					break;
//				}
//			}
//		}
////		cout<<res<<endl;
//		printf("%lld\n", res);
//
//	}
//	return 0;
//}
