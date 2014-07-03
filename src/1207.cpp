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
//	long long int n;
//	GetPrime_1();
//	while (cin >> n) {
//		int cnt = 0;
//		if (is_prime(n)) {
//			cout << 1 << endl;
//			continue;
//		}
////		while (n > 1) {
//		long long int s=n;
//		for (int i = 0; primes[i] * primes[i] <= s; i++) {
//			while (n % primes[i] == 0) {
//				cnt++;
//				n /= primes[i];
////				cout<<n<<' ';
//			}
//			if (n == 1) {
//				cout << cnt << endl;
//				break;
//			}
////			}
//		}
//	}
//	return 0;
//}
