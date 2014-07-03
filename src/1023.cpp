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
//	string num;
//	string name;
////	int age;
//	int score;
//};
//bool cmp1(node a, node b) {
//
//	return a.num < b.num;
//}
//bool cmp2(node a, node b) {
//	if (a.name == b.name) {
//		return a.num < b.num;
//	}
//	return a.name < b.name;
//}
//bool cmp3(node a, node b) {
//	if (a.score == b.score) {
//		return a.num < b.num;
//	}
//	return a.score < b.score;
//}
//int main() {
//	int n, c, T = 0;
//	while (cin >> n >> c) {
//		if (n == 0) {
//			break;
//		}
//		T++;
//		node a[n];
//		for (int i = 0; i < n; i++) {
//			cin >> a[i].num >> a[i].name >> a[i].score;
//		}
//		if (c == 1) {
//			sort(a, a + n, cmp1);
//		}
//		if (c == 2) {
//			sort(a, a + n, cmp2);
//		}
//		if (c == 3) {
//			sort(a, a + n, cmp3);
//		}
//		cout << "Case " << T << ":" << endl;
//		for (int i = 0; i < n; i++) {
//			cout << a[i].num << ' ' << a[i].name << ' ' << a[i].score << endl;
//		}
//
//	}
//	return 0;
//}
