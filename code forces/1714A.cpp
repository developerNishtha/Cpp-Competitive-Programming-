#include <bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define int long long 
typedef long long ll;
 
void solve(){
    int n,H,M;
    cin>>n>>H>>M;
    map<int,int> mp;
    for(int i=0;i<n;i++){
        int h,m;
        cin>>h>>m;
        mp[h*60+m]++;
    }
    int t=0;
    while(!mp[(H*60+M+t)%(60*24)]){
        t++;
    }
    t%=24*60;
    cout<<t/60<<" "<<t%60<<endl;
}
 
 
signed main()
{
    int t;
    cin>>t;
    while(t--){
     solve();
    }
}