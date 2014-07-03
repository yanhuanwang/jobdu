//#include <stdio.h>
//#define N  100000+10
//
//double Min[N], Max[N], a[N];
//
//double min(double x, double y) {
//	if (x < y)
//		return x;
//	return y;
//}
//
//double max(double x, double y) {
//	if (x > y)
//		return x;
//	return y;
//}
//
//int main() {
//	int n;
//	double ans;
//	while (scanf("%d", &n) != EOF) {
//		for (int i = 0; i < n; i++) {
//			scanf("%lf", &a[i]);
//		}
//
//		Min[0] = a[0];
//		Max[0] = a[0];
//		ans = a[0];
//
//		for (int i = 1; i < n; i++) {
//			Min[i] = min(a[i], min(Min[i - 1] * a[i], Max[i - 1] * a[i]));
//			Max[i] = max(a[i], max(Max[i - 1] * a[i], Min[i - 1] * a[i]));
//			ans = max(ans, Max[i]);
//		}
//
//		int nn = (int) ans;
//
//		if (nn == ans) {
//			printf("%d\n", nn);
//			continue;
//		}
//		if (ans < 0)
//			printf("-1\n");
//		else
//			printf("%.2lf\n", ans);
//	}
//
//	return 0;
//}
