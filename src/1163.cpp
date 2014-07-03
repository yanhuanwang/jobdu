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
//const int MAXN = 10000;
//int flag[MAXN / 32 + 1];
//int primes[MAXN / 3 + 1], pi;
//void GetPrime_1() {
//	int i, j;
//	pi = 0;
//	memset(flag, 0, sizeof(flag));
//	for (i = 2; i < MAXN; i++)
//		if (!((flag[i / 32] >> (i % 32)) & 1)) {
//			primes[pi++] = i;
//			for (j = i; j < MAXN; j += i)
//				flag[j / 32] |= (1 << (j % 32));
//		}
//}
//
//int main() {
//	int n;
//	GetPrime_1();
//	while (cin >> n) {
//		if (primes[4] < n) {
//			cout << primes[4];
//		} else {
//			cout << -1 << endl;
//			continue;
//		}
//		int i = 5;
//		while (primes[i] < n) {
//			if (primes[i] % 10 == 1) {
//				cout << ' ' << primes[i];
//			}
//			i++;
//		}
//		cout << endl;
//	}
//	return 0;
//}
