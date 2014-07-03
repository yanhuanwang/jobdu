///*每个正数都是一个32位二进制串，只有一个lucky number
//lucky出现m%n次，其他为n次，如果没有lucky，序列中个位为0的整数和
//都是n的整数倍，lucky出现m%n次，统计序列中1的整数的个数，假设为C
//若C%n==0 luck的个位为0，否则C%n一定为m%n，且luck个位为1
//其它位跟给位一样*/
//#include<iostream>
//#include<cstring>
//#include<cstdio>
//using namespace std;
//int a[32];//记录所有整数中，每一位1的个数
//int main()
//{
//    int m,n,x,i;
//    while(scanf("%d%d",&n,&m)==2)
//    {
//       memset(a,0,sizeof(a));
//       int num=m;
//       while(num--)
//       {
//          scanf("%d",&x);
//          for(i=0;i<32;i++)
//          {
//             if(x&1) a[i]++;
//             x>>=1; //右移移位
//          }
//       }
//       int temp=m%n;
//       int res=0;
//       for(i=0;i<32;i++)
//       {
//          if(a[i]%n==temp) //lucky num该位的 二进制 位 为 1
//          res |= (1<<i);//
//       }
//       printf("%d\n",res);
//    }
//    return 0;
//}
