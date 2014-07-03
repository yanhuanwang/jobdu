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
//bool isValid(vector<vector<int> >&board, int x, int y) {
////	bool res = true;
//	int n = board.size();
//	for (int i = 0; i < x; i++) {
////		if (i == x) {
////			continue;
////		}
//		if (board[i][y] == 1) {
//			return false;
//		}
//		int c = abs(i - x);
//		if (y + c >= 0 && y + c < n && board[i][y + c] == 1) {
//			return false;
//		}
//		if (y - c >= 0 && y - c < n && board[i][y - c] == 1) {
//			return false;
//		}
//
//	}
////	for (int i = 0; i < board.size(); i++) {
////		if (i == x) {
////			continue;
////		}
////		int c = abs(i - x);
////		if (y + c >= 0 && y + c < board.size() && board[i][y + c] == 1) {
////			return false;
////		}
////		if (y - c >= 0 && y - c < board.size() && board[i][y - c] == 1) {
////			return false;
////		}
////	}
//	return true;
//}
//void dfs(vector<vector<int> >&board, int start, int &res) {
//	int n = board.size();
//	if (start == n) {
//		res++;
//		return;
//	}
//	if (start > n) {
//		return;
//	}
//	for (int i = 0; i < n; i++) {
//		if (isValid(board, start, i)) {
//			board[start][i] = 1;
//			dfs(board, start + 1, res);
//			board[start][i] = 0;
//		}
//	}
//}
//int main() {
//	int n;
//	while (cin >> n) {
//		int res = 0;
//		vector<vector<int> > board(n, vector<int>(n, 0));
//		dfs(board, 0, res);
//		cout << res << endl;
//	}
//	return 0;
//}
