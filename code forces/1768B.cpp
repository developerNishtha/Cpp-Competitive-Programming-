#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int n,k;
        cin>>n>>k;
 
        vector<int> v(n);
        int ans = 0;
 
        for(int i=0;i<n;i++){
            cin>>v[i];
 
            if(v[i] == ans + 1){
                ans++;
            }
        }
 
        cout<<((n-ans)+k-1)/k<<endl;
    }
    return 0;
}