//#include <cstdio>
//#include <string>
//#include <cstring>
//#include <ctime>
//#include <cstdlib>
//#include <map>
//#include <queue>
//#include <string>
//#include <algorithm>
//using namespace std;
//typedef long long lld;
//
//const int INF = 1000000000;
//
//const int MAX = 110000;
//lld a[MAX], b[MAX];
//lld countA(lld aim, lld n, lld m) {
//	lld ret = 0;
//	lld i = 0, j = m - 1;
//	for (i = 0; i < n; i++) {
//		while (j >= 0 && a[i] + b[j] > aim) {
//			j--;
//		}
//		ret += j + 1;
//	}
//	return ret;
//}
////start 提示：自动阅卷起始唯一标识，请勿删除或增加。
//int main() {
//	lld n, m, k;
//	int last = 0;
//	int i, j;
//	lld ans = 0;
//	while (scanf("%lld%lld%lld", &n, &m, &k) != EOF) {
//		for (i = 0; i < n; i++)
//			scanf("%lld", &a[i]);
//		for (i = 0; i < m; i++)
//			scanf("%lld", &b[i]);
//		sort(a, a + n);
//		sort(b, b + m);
//		lld low = a[0] + b[0];
//		lld high = a[n - 1] + b[m - 1];
//		lld mid;
//		ans = low;
//		while (low <= high) {
//			mid = (low + high) >> 1;
//			if (countA(mid, n, m) >= k) {
//				ans = mid;
//				high = mid - 1;
//			} else
//				low = mid + 1;
//		}
//		printf("%lld\n", ans);
//	}
//	return 0;
//}
