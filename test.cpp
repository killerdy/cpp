#include <iostream>
#include<algorithm>
using namespace std;
int a[10][10];
int main()
{

	int n;
	cin>>n;
	int k=1;
	int x=1,y=0;
	while(k<=n*n)//循环进行整个数组的模拟
	{
		while(y<n&&!a[x][y+1]){ a[x][++y]=k++;}
		while(x<n&&!a[x+1][y]){ a[++x][y]=k++;}
		while(y>1&&!a[x][y-1]){ a[x][--y]=k++;}
		while(x>1&&!a[x-1][y]){ a[--x][y]=k++;}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		printf("%3d",a[i][j]);
		printf("\n");
	}

	return 0;
 } 