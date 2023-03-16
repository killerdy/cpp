#include<iostream>
using namespace std;
const int N=45;//定义常量，尽量比题目所需稍稍大几位
int a[N];//定义全局数组
void init()//初始化
{
    a[1]=1;
    for(int i=2;i<N;i++)
    a[i]=a[i-1]+a[i-2];
}
int main()
{
    init();
    int n;cin>>n;
    for(int i=1;i<=n;i++)
    cout<<a[n]<<" ";
    return 0;
}