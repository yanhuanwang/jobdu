///*ÿ����������һ��32λ�����ƴ���ֻ��һ��lucky number
//lucky����m%n�Σ�����Ϊn�Σ����û��lucky�������и�λΪ0��������
//����n����������lucky����m%n�Σ�ͳ��������1�������ĸ���������ΪC
//��C%n==0 luck�ĸ�λΪ0������C%nһ��Ϊm%n����luck��λΪ1
//����λ����λһ��*/
//#include<iostream>
//#include<cstring>
//#include<cstdio>
//using namespace std;
//int a[32];//��¼���������У�ÿһλ1�ĸ���
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
//             x>>=1; //������λ
//          }
//       }
//       int temp=m%n;
//       int res=0;
//       for(i=0;i<32;i++)
//       {
//          if(a[i]%n==temp) //lucky num��λ�� ������ λ Ϊ 1
//          res |= (1<<i);//
//       }
//       printf("%d\n",res);
//    }
//    return 0;
//}
