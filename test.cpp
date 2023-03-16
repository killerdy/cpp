#include <iostream>
#include <algorithm>
#define int long long 
using namespace std;
int n, q;
const int N = 2e5 + 5;
int a[N], pre[N];//开个前缀数组
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> q;
    for(int i=1;i<=n;i++)
    cin>>a[i];
    sort(a+1,a+1+n);
    for(int i=1;i<=n;i++)
    pre[i]=pre[i-1]+a[i];
    a[n+1]=0x3f3f3f3f3f;
    while(q--)
    {
        int x;cin>>x;
        int sum=0;
        int k=upper_bound(a+1,a+n+2,x)-a;//一个比较好用的二分函数，大家可以学习一下
        sum+=(x*(k-1))-pre[k-1];
        sum+=pre[n]-pre[k-1]-x*(n-k+1);
        cout<<sum<<"\n";
    }

    return 0;
}