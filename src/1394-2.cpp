//#include<iostream>
//#include<algorithm>
//using namespace std;
//int main() {
//	int n, a[1005], min, t, i, j;
//	while (cin >> n) {
//		for (i = 0; i < n; i++)
//			cin >> a[i];
//		sort(a, a + n);
//		for (i = 0; i < 4; i++)
//			a[n + i] = -1;
//		min = 4;
//		for (i = 0; i < n; i++) {
//			t = 4;
//			for (j = i + 4; j > i; j--)
//				if (a[j] <= a[i] + 4 && a[j] >= 0)
//					t--;
//			if (t < min)
//				min = t;
//		}
//		cout << min << endl;
//	}
//	return 0;
//}
