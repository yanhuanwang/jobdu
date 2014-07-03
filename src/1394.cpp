//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//int main() {
//	int n, a[1005], min, t, i, j;
//	while (cin >> n) {
//		for (i = 0; i < n; i++)
//			cin >> a[i];
//		sort(a, a + n);
//		vector<int> vi(a, a + n);
//		vi.erase(unique(vi.begin(), vi.end()), vi.end());
//		for (i = 0; i < 4; i++)
////			a[n + i] = -1;
//			vi.insert(vi.end(), -1);
//		min = 4;
//		for (i = 0; i < vi.size() - 4; i++) {
//			t = 4;
//			for (j = i + 4; j > i; j--)
//				if (vi[j] <= vi[i] + 4 && vi[j] >= 0)
//					t--;
//			if (t < min)
//				min = t;
//		}
//		cout << min << endl;
//	}
//	return 0;
//}
