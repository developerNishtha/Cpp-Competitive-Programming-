#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nishtha(){
    int n,k;
    cin >> n >> k;
    string s;
    cin >> s;
   int a[n+1];
    a[0]=0;
    int x=0;
    for(int i=0;i<n;i++){
        if(s[i]=='W')x++;
        a[i+1]=x;
    }
    int ans=INT_MAX;
    for(int i=0;i<n-k+1;i++){
        ans= min(ans,a[i+k]-a[i]);
    }
    cout<<ans<<endl;

    // int wCnt= 0;
    // int l = 0;
    // int r = 0;
    // while(r<k) {
    //     if(s[r]=='W') wCnt++;
    //     r++;
    // }
  
    // int mini = wCnt;
    // while(r<n) {
    //     if(s[r]=='W') wCnt++;
    //     if(s[l]=='W') wCnt--;
    //     l++;
    //     mini = min(wCnt,mini);
    //     r++;
    // }
    // cout << mini << endl;
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