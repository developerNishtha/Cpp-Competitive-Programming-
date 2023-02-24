#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main(){
 int t;
 cin>>t;
 while ( t--)
 {
    int n;cin>>n;
    vector<int>a(n),b(n);
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
    for ( int i = 0; i <  n; i++)
    {
       cin>>b[i];
    }
    vector<int>pre(n);
    pre[0]=b[0];
    for(int i=1;i<n;i++){
      pre[i]=pre[i-1]+b[i];
    }

    vector<int>freq(n+1),rem(n+1);
    for ( int i = 0; i <  n; i++)
    {
      int val=a[i];
      if(i>0){
        val+=pre[i-1];
      }
      int ind=upper_bound(pre.begin(),pre.end(),val)-pre.begin();
      freq[ind]++;
      int rm=val;
      if(ind>0){
        rm-=pre[ind-1];
      }
    rem[ind]+=rm;
    }

   for(int i=1;i<=n;i++){
    freq[i]+=freq[i-1];
   }

   for ( int i = 0; i <  n; i++)
   {
     int x=(i+1-freq[i])*b[i]+rem[i];
     cout<<x<<" ";
   }
   cout<<endl;

 }

}