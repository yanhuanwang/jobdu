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
//vector<string> Tokenize(string s, string ch) {
//	vector<string> ret;
//	for (int p = 0, p2; p < s.size(); p = p2 + 1) {
//		p2 = s.find_first_of(ch, p);
//		if (p2 == -1)
//			p2 = s.size();
//		if (p2 - p > 0)
//			ret.push_back(s.substr(p, p2 - p));
//	}
//	return ret;
//}
//map<string, string> m;
//int main() {
//	m["one"] = "1";
//	m["two"] = "2";
//	m["three"] = "3";
//	m["four"] = "4";
//	m["five"] = "5";
//	m["six"] = "6";
//	m["seven"] = "7";
//	m["eight"] = "8";
//	m["nine"] = "9";
//	m["zero"] = "0";
//	string s;
//	while (getline(cin, s)) {
//		s.erase(s.size() - 1);
//		vector<string> a = Tokenize(s, "+");
////		cout << a[0] << ' ' << a[1] << endl;
//		vector<string> left = Tokenize(a[0], " ");
//		vector<string> right = Tokenize(a[1], " ");
//		for (int i = 0; i < left.size(); i++) {
////			left[i] = (char) (m[left[i]] + '0');
//			left[i] = m[left[i]];
////			cout << left[i] << ' ';
//		}
////		cout << endl;
//		for (int i = 0; i < right.size(); i++) {
////			right[i] = (char) (m[right[i]] + '0');
//			right[i] = m[right[i]];
//		}
//		string x, y;
//		for (int i = 0; i < left.size(); i++) {
//			x += left[i];
//		}
//		for (int i = 0; i < right.size(); i++) {
//			y += right[i];
//		}
//		int z;
//		z = atoi(x.c_str()) + atoi(y.c_str());
//		if(x=="0"&&y=="0"){
//			break;
//		}
//		cout << z << endl;
//	}
//	return 0;
//}
