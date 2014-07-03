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
//const int MAXN = 1000000;
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
//bool is_prime(long long int n) {
//	if (n < 2) {
//		return false;
//	}
//	for (long long int i = 2; i * i <= n; i++) {
//		if (n % i == 0) {
//			return false;
//		}
//	}
//	return true;
//}
//int main() {
//	int n;
//	GetPrime_1();
//	while (cin >> n) {
//		if (!n) {
//			break;
//		}
//		int cnt = 0;
//		for (int i = 0; primes[i] * 2 <= n; i++) {
//			if (is_prime(n - primes[i])) {
////				cout << primes[i] << ' ' << n - primes[i] << endl;
//				cnt++;
//			}
////		cout << primes[n - 1] << endl;
//		}
//		cout << cnt << endl;
//	}
//	return 0;
//}
