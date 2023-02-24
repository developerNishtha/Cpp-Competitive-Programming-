#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
int n;
cin >>n;
int a[n];
for (int i = 0; i < n; i++)
{
    cin >>a[i];
}
int ans=0;
for (int i = 0; i < n; i++)
{
    int count=0;
    for (int j = 0; j < n; j++)
    {
      if(a[j]>a[i]){
        count++;
      }
    }
    if(n-count>count){
        ans++;
    }
}
cout <<ans<<endl;

}

int main()
{
	int t;
	cin >> t;
	while (t--){
		nishtha();
	}
	return 0;	
}