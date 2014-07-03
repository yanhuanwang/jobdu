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
//	int num;
//	string name;
//	int age;
//	bool operator<(const node b) {
//		return age < b.age;
//	}
//};
//class mycomparison {
//	bool reverse;
//public:
//	mycomparison(const bool& revparam = true) {
//		reverse = revparam;
//	}
//	bool operator()(const node& lhs, const node&rhs) const {
//		if (reverse)
//			return (lhs.age > rhs.age);
//		else
//			return (lhs.age < rhs.age);
//	}
//};
//
//int main() {
//	int n;
//	while (cin >> n) {
//		node a[n];
//		priority_queue<node, vector<node>, mycomparison> q;
//		for (int i = 0; i < n; i++) {
//			cin >> a[i].num >> a[i].name >> a[i].age;
//			q.push(a[i]);
//		}
//		int t = 3;
//		while (t--) {
//			cout << q.top().num << ' ' << q.top().name << ' ' << q.top().age
//					<< endl;
//			q.pop();
//		}
//	}
//	return 0;
//}
