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
//
//int main() {
//	int n;
//	while (cin>>n) {
//		int a[n];
//		for(int i=0;i<n;i++){
//			cin>>a[i];
//		}
//		int dp[n],res=0;
//		for(int i=n-1;i>=0;i--){
//			dp[i]=1;
//			for(int j=i+1;j<n;j++){
//				if(a[i]>=a[j]){
//					dp[i]=max(dp[i],dp[j]+1);
//				}
//			}
//			res=max(res,dp[i]);
//		}
//		cout<<res<<endl;
//	}
//	return 0;
//}
