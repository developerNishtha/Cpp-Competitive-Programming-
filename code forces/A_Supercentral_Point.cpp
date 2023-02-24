// #include <iostream>
// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;
 
// void nishtha(){
// int n,cnt;
// cin >>n;
// int a[n],b[n];
// int ans=0;
// for (int i = 0; i < n; i++)
// {
//     cin >>a[i]>>b[i];
// }
// for (int i = 0; i < n; i++)
// {
//    cnt=0;
//    for (int j = 0; j < n; j++)
//    {
//     if(a[i]==a[j] && b[i]>b[j]) cnt++;
//     if(a[i]==a[j] && b[i]<b[j]) cnt++;
//     if(a[i]>a[j] && b[i]==b[j]) cnt++;
//     if(a[i]<a[j] && b[i]==b[j]) cnt++;
//    }
//  if(cnt==4) ans++;
// }
//    cout<<ans;
// }
 
// int main()
// {
// 	int t=1;
// 	//cin >> t;
// 	while (t--){
// 		nishtha();
// 	}
// 	return 0;	
// }

#include<bits/stdc++.h>
using namespace std;
int n,x[500],y[500],a,b,d,e,c;
int main()
{
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>x[i]>>y[i];
	}
	for(int i=0;i<n;i++){
		a=b=d=e=0;
		for(int j=0;j<n;j++){
			if(x[i]==x[j]&&y[i]<y[j]){
				a=1;
			}
			if(x[i]==x[j]&&y[i]>y[j]){
				b=1;
			}
			if(y[i]==y[j]&&x[i]<x[j]){
				d=1;
			}
			if(y[i]==y[j]&&x[i]>x[j]){
				e=1;
			}
		}
		if(a+b+d+e==4)
			c++;
	}
	cout<<c;
}
