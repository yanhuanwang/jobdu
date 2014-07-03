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
//int father[MAX]; /* father[x]��ʾx�ĸ��ڵ�*/
//int val[MAX]; /* rank[x]��ʾx����*/
///* ��ʼ������*/
//void Make_Set(int x) {
//	father[x] = x; //����ʵ�����ָ���ĸ��ڵ�ɱ仯
//	val[x] = 0;   //����ʵ�������ʼ����Ҳ�����仯
//}
///* ����xԪ�����ڵļ���,����ʱѹ��·��*/
//int Find_Set(int x) {
//	if (x != father[x]) {
//		father[x] = Find_Set(father[x]); //�������ʱ��ѹ��·���Ǿ���
//	}
//	return father[x];
//}
///*
// ���Ⱥϲ�x,y���ڵļ���
// ������Ǹ�if else�ṹ���Ǿ��Եģ������������仯
// ���ǣ���ּ�ǲ���ļ������Ⱥϲ���ʵʱ�����ȡ�
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
