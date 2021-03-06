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
//#define MAX 100000
//int father[MAX]; /* father[x]表示x的父节点*/
//int val[MAX]; /* rank[x]表示x的秩*/
///* 初始化集合*/
//void Make_Set(int x) {
//	father[x] = x; //根据实际情况指定的父节点可变化
//	val[x] = 0;   //根据实际情况初始化秩也有所变化
//}
///* 查找x元素所在的集合,回溯时压缩路径*/
//int Find_Set(int x) {
//	if (x != father[x]) {
//		father[x] = Find_Set(father[x]); //这个回溯时的压缩路径是精华
//	}
//	return father[x];
//}
///*
// 按秩合并x,y所在的集合
// 下面的那个if else结构不是绝对的，具体根据情况变化
// 但是，宗旨是不变的即，按秩合并，实时更新秩。
// */
//void Union(int x, int y) {
//	x = Find_Set(x);
//	y = Find_Set(y);
//	if (x == y)
//		return;
//	if (val[x] > val[y]) {
//		father[y] = x;
//	} else {
//		if (val[x] == val[y]) {
//			val[y]++;
//		}
//		father[x] = y;
//	}
//}
//
//int main() {
//	int n, m, a, b;
//	memset(father, 0, sizeof(father));
//	memset(val, 0, sizeof(val));
//	while (cin >> n >> m) {
//		if(n==0){
//			break;
//		}
//		for (int i = 1; i <= n; i++) {
//			Make_Set(i);
//		}
//		for (int i = 0; i < m; i++) {
//			cin >> a >> b;
//			Union(a, b);
//		}
//		set<int>st;
//		for(int i=1;i<=n;i++){
//			st.insert(father[i]);
//		}
//		cout<<st.size()<<endl;
//	}
//	return 0;
//}
