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
//	int n;
//	while (cin >> n) {
//		if (!n) {
//			break;
//		}
//		priority_queue<int, vector<int>, greater<int> > q;
//		int a[n + 1], res = 0;
//		for (int i = 1; i < n + 1; i++) {
//			cin >> a[i];
//			q.push(a[i]);
//		}
//		while (!q.empty()) {
//			int x = q.top();
//			res+=x;
//			q.pop();
//			int y = q.top();
//			res+=y;
//			q.pop();
//			if(!q.empty())
//			q.push(x+y);
//		}
//		cout<<res<<endl;
//	}
//	return 0;
//}
