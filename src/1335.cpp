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
//int dx[] = { 1, -1, 0, 0 };
//int dy[] = { 0, 0, 1, -1 };
//int main() {
//	int n;
//	while (cin >> n) {
//		int a[n][n];
//		for (int i = 0; i < n; i++) {
//			for (int j = 0; j < n; j++) {
//				cin >> a[i][j];
//			}
//		}
//		if (a[0][0] == 1 && a[n - 1][n - 1] == 1) {
//			cout << -1 << endl;
//			continue;
//		}
//		queue<pair<int, int> > q, p;
//		set<pair<int, int> > visited;
//		q.push(make_pair(0, 0));
//		visited.insert(make_pair(0, 0));
//		int cnt = 0;
//		while (!q.empty()) {
//			cnt++;
//			while (!q.empty()) {
//				int x = q.front().first;
//				int y = q.front().second;
//				q.pop();
//				int newx, newy;
//				for (int i = 0; i < 4; i++) {
//					newx = x + dx[i];
//					newy = y + dy[i];
//					if (newx < 0 || newy < 0 || newx >= n || newy >= n
//							|| a[newx][newy] == 1
//							|| visited.count(make_pair(newx, newy))) {
//						continue;
//					}
//					if(newx==n-1&&newy==n-1){
//						cout<<cnt<<endl;
//						goto out;
//					}
//					p.push(make_pair(newx, newy));
//					visited.insert(make_pair(newx, newy));
//				}
//			}
//			swap(q, p);
//		}
//		cout<<-1<<endl;
//		out:;
//	}
//	return 0;
//}
