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
//	int n, k;
//	while (scanf("%d", &n) != EOF) {
//		int a[n];
//		priority_queue<int, vector<int>, greater<int> > q;
//		for (int i = 0; i < n; i++) {
//			scanf("%d", &a[i]);
//			q.push(a[i]);
//		}
//		scanf("%d", &k);
//		int b=q.top();
//		q.pop();
//		k--;
//		while(k--){
////			cout<<b<<' ';
//			while(b==q.top()){
//				q.pop();
//			}
//			b=q.top();
//			q.pop();
//		}
//		cout<<b<<endl;
//	}
//	return 0;
//}
