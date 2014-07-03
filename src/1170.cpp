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
//class mycomparison {
//	bool reverse;
//public:
//	mycomparison(const bool& revparam = true) {
//		reverse = revparam;
//	}
//	bool operator()(const pair<int, int>& lhs, const pair<int, int>&rhs) const {
//		if (reverse)
//			return (lhs > rhs);
//		else {
//			if (lhs.first == rhs.first) {
//				return lhs.second < rhs.second;
//			}
//			return (lhs.first < rhs.first);
//		}
//	}
//};
//int main() {
//	int n;
//	while (cin >> n) {
//		pair<int, int> a[n];
//		priority_queue<pair<int, int>, vector<pair<int, int> >, mycomparison> q;
//		for (int i = 0; i < n; i++) {
//			cin >> a[i].first >> a[i].second;
//			q.push(a[i]);
//		}
//		cout<<q.top().first<<' '<<q.top().second<<endl;
//	}
//	return 0;
//}
