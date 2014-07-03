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
//bool cmp(string a, string b) {
//	return a.size() < b.size();
//}
//int board[8][8];
////set<pair<int, int> > visited;
//string s;
//vector<string> res;
//void setBoard(int x, int y) {
//	for (int i = x + 1, j = y + 1; i < 8 && j < 8; i++, j++) {
//		board[i][j]++;
//	}
//	for (int i = x + 1, j = y - 1; i < 8 && j >= 0; i++, j--) {
//		board[i][j]++;
//	}
//	for (int i = x + 1; i < 8; i++) {
//		board[i][y]++;
//	}
//	for (int i = x, j = y; i >= 0 && j < 8; i--, j++) {
//		board[i][j]++;
//	}
//	for (int i = x, j = y; i >= 0 && j >= 0; i--, j--) {
//		board[i][j]++;
//	}
//	for (int i = x; i >= 0; i--) {
//		board[i][y]++;
//	}
//}
//void clearBoard(int x, int y) {
//	for (int i = x + 1, j = y + 1; i < 8 && j < 8; i++, j++) {
//		board[i][j]--;
//	}
//	for (int i = x + 1, j = y - 1; i < 8 && j >= 0; i++, j--) {
//		board[i][j]--;
//	}
//	for (int i = x + 1; i < 8; i++) {
//		board[i][y]--;
//	}
//	for (int i = x, j = y; i >= 0 && j < 8; i--, j++) {
//		board[i][j]--;
//	}
//	for (int i = x, j = y; i >= 0 && j >= 0; i--, j--) {
//		board[i][j]--;
//	}
//	for (int i = x; i >= 0; i--) {
//		board[i][y]--;
//	}
//}
//void dfs(int start) {
//	if (start == 8) {
//		res.push_back(s);
//		return;
//	}
//	if (start > 8) {
//		return;
//	}
//	for (int i = 0; i < 8; i++) {
//		if (board[start][i] == 0) {
//			s += char(i + 1 + '0');
////			cout << s << ' ';
//			setBoard(start, i);
//			dfs(1 + start);
//			clearBoard(start, i);
//			s.erase(s.size() - 1);
//		}
//	}
//}
//void queen() {
//	for (int i = 0; i < 8; i++) {
//		s += char(i + 1 + '0');
////		cout << s << ' ';
//		setBoard(0, i);
////		for (int j = 0; j < 8; j++) {
////			for (int k = 0; k < 8; k++) {
////				cout << board[j][k] << ' ';
////			}
////			cout << endl;
////		}
//		dfs(1);
//		clearBoard(0, i);
//		s.erase(s.size() - 1);
//	}
//}
//int main() {
//	memset(board, 0, sizeof(board));
//	queen();
////	for (auto x : res) {
////		cout << x << endl;
////	}
//	sort(res.begin(), res.end());
//	int n;
//	cin >> n;
//	while (n--) {
//		int a;
//		cin >> a;
//		cout << res[a-1] << endl;
//	}
//	return 0;
//}
