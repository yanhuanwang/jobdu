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
//	int a, n;
//	while (cin >> a >> n) {
//		vector<int> b(n, 0);
//		for (int i = 0; i < n; i++) {
//			b[i] = (i + 1) * a;
//		}
//		for (int i = n - 1; i >= 1; i--) {
//			if (b[i] >= 10) {
//				b[i - 1] += b[i] / 10;
//				b[i] %= 10;
//			}
//		}
//		if (b[0] >= 10) {
//			int s = b[0] / 10;
//			b[0] %= 10;
//			while (s >= 10) {
//				b.insert(b.begin(), s % 10);
//				s /= 10;
//			}
//			b.insert(b.begin(), s);
//		}
//		for(int i=0;i<b.size();i++){
//			cout<<b[i];
//		}
//		cout<<endl;
//	}
//	return 0;
//}
