#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha()
{
    int n,ans=1;
    cin>>n;
    int a[n+1];
		a[0]=-1;
		for(int i=1;i<=n;i++)cin>>a[i];
		sort(a+1,a+n+1);

		for(int i=1;i<=n;i++)if(a[i]-a[i-1]>1&&i-2>=a[i-1]&&i-1<a[i])ans++;
		cout<<ans<<endl;
	
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        nishtha();
    }
    return 0;
}