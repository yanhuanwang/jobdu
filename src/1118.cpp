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
//map<char, int> m;
//map<int, char> m2;
//int main() {
//	m['0'] = 0;
//	m['1'] = 1;
//	m['2'] = 2;
//	m['3'] = 3;
//	m['4'] = 4;
//	m['5'] = 5;
//	m['6'] = 6;
//	m['7'] = 7;
//	m['8'] = 8;
//	m['9'] = 9;
//	m['a'] = 10;
//	m['b'] = 11;
//	m['c'] = 12;
//	m['d'] = 13;
//	m['e'] = 14;
//	m['f'] = 15;
//	m2[0] = '0';
//	m2[1] = '1';
//	m2[2] = '2';
//	m2[3] = '3';
//	m2[4] = '4';
//	m2[5] = '5';
//	m2[6] = '6';
//	m2[7] = '7';
//	m2[8] = '8';
//	m2[9] = '9';
//	m2[10] = 'A';
//	m2[11] = 'B';
//	m2[12] = 'C';
//	m2[13] = 'D';
//	m2[14] = 'E';
//	m2[15] = 'F';
//	int a, b;
//	string n;
//	while (cin >> a >> n >> b) {
//		transform(n.begin(), n.end(), n.begin(), ::tolower);
//		long long sum = 0;
//		for (int i = 0; i < n.size(); i++) {
//			sum += m[n[i]] * (int) pow(a, n.size() - i - 1);
//		}
//		if (!sum) {
//			cout << 0 << endl;
//			continue;
//		}
////		cout << sum << endl;
//		string res;
//		while (sum) {
//			res += m2[sum % b];
//			sum /= b;
//		}
//		reverse(res.begin(), res.end());
//		cout << res << endl;
//	}
//	return 0;
//}
